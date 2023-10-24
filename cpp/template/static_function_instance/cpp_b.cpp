#include "template.h"

struct CppB 
{
	CppB()
	{
		TName<FCppBS>::GetNameRef() = "CppBS";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static CppB b;

void func_cpp_b()
{
	TName<FCppBF>::GetNameRef() = "CppBF";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
}
