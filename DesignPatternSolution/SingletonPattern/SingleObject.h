#pragma once
#include "stdafx.h"
#include <mutex>
static mutex mt;
class SingleObject
{
public:
	//懒汉
	static SingleObject *getInstance_1()
	{
		if (m_pInstance == NULL)
			m_pInstance = new SingleObject();
		return m_pInstance;
	}
	//饿汉, 在多线程下会有问题
	static SingleObject *getInstance_2()
	{
		static SingleObject m_instacne;
		return &m_instacne;
	}
	//线程安全
	static SingleObject *getInstance_3()
	{
		if (NULL == m_pInstance_3)
		{
			mt.lock();
			if (NULL == m_pInstance_3)
			{
				m_pInstance_3 = new SingleObject();
			}
			mt.unlock();
		}
		return m_pInstance_3;
	}

	void getInfo();

private:
	SingleObject();
	static SingleObject *m_pInstance;
	static SingleObject *m_pInstance_3;
};

