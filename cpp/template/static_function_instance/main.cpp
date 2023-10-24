#include "template.h"


struct CppM2 
{
	CppM2()
	{
		TName<FCppMS2>::GetNameRef() = "CppMS2";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static CppM2 m;

struct CppM1 
{
	CppM1()
	{
		TName<FCppMS1>::GetNameRef() = "CppMS1";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static CppM1 m1;

void test()
{
	// func_libs_a();
}

int main()
{
	cout<<"---- ---- ---- ---- ---- ----"<<endl;
	Temp::PrintNames();

	cout<<"---- ---- ---- ---- ---- ----"<<endl;
	func_cpp_b();
	cout<<"---- ---- ---- ---- ---- ----"<<endl;
	func_libs_b2();
	cout<<"---- ---- ---- ---- ---- ----"<<endl;
	func_libd_b2();
	cout<<"---- ---- ---- ---- ---- ----"<<endl;
	Temp::PrintNames();

	return 0;
}

