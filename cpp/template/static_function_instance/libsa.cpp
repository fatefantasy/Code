#include "template.h"

struct LibSA
{
	LibSA()
	{
		TName<FLibSAS>::GetNameRef() = "LibSAS";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static LibSA a;

void func_libs_a()
{
	TName<FLibSAF>::GetNameRef() = "LibSAF";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
}
