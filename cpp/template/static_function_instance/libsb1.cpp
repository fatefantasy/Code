#include "template.h"

struct LibSB1
{
	LibSB1()
	{
		TName<FLibSBS1>::GetNameRef() = "LibSBS1";	
		cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
	}
};
static LibSB1 b1;

void func_libs_b1()
{
	TName<FLibSBF1>::GetNameRef() = "LibSBF1";
	cout<<__FILE__<<": "<<__LINE__<<": "<<__FUNCTION__<<endl;
}
