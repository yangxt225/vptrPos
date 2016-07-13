#include <iostream>

class ClassA
{
public:
	ClassA(){ };
	int m_obj;
	virtual void func(){ };
};

int main()
{
	ClassA obj;
	char* pObj = reinterpret_cast<char*>(&obj);
	char* pMember = reinterpret_cast<char*>(&obj.m_obj);
	if(pObj == pMember)
		std::cout << "the vptr is in the end of class.\n";
	else
		std::cout << "the vptr is in the begin of class.\n";

	return 0;
}


