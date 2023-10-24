#include "template.h"

struct LibDB2
{
	LibDB2()
	{
		TName<FLibDBS2>::GetNameRef() = "LibDBS2";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static LibDB2 b;

void func_libd_b2()
{
	TName<FLibDBF2>::GetNameRef() = "LibDBF2";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	Temp::PrintNames();
}
