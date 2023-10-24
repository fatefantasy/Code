#include "template.h"

struct CppA 
{
	CppA()
	{
		TName<FCppAS>::GetNameRef() = "CppAS";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static CppA a;

void func_cpp_a()
{
	TName<FCppAF>::GetNameRef() = "CppAF";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
}
