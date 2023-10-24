#include "template.h"

struct LibDA
{
	LibDA()
	{
		TName<FLibDAS>::GetNameRef() = "LibDAS";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static LibDA a;

void func_libd_a()
{
	TName<FLibDAF>::GetNameRef() = "LibDAF";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
}
