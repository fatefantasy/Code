#include "template.h"

struct LibDB1
{
	LibDB1()
	{
		TName<FLibDBS1>::GetNameRef() = "LibDBS1";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static LibDB1 b;

void func_libd_b1()
{
	TName<FLibDBF1>::GetNameRef() = "LibDBF1";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
}
