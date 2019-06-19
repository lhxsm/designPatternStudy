#include "stdafx.h"
#include "SingleObject.h"

SingleObject *SingleObject::m_pInstance = NULL;
SingleObject *SingleObject::m_pInstance_3 = NULL;

void SingleObject::getInfo()
{
	cout << "this is a singleton pattern" << endl;
}

SingleObject::SingleObject()
{

}
