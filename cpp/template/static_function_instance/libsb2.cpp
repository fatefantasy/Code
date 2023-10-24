#include "template.h"

struct LibSB2
{
	LibSB2()
	{
		TName<FLibSBS2>::GetNameRef() = "LibSBS2";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static LibSB2 b2;

void func_libs_b2()
{
	TName<FLibSBF2>::GetNameRef() = "LibSBF2";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	Temp::PrintNames();
}
