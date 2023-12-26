#include <iostream>

using namespace std;

class FBase 
{
public:
	virtual void Func()	{ cout<<"FBase::Func"<<endl; }
	FBase()	{ Func(); }
};

class FClassA : public FBase
{
public:
	virtual void Func()	{ cout<<"FClassA::Func"<<endl; }
	FClassA() : FBase()	{ Func(); }
};

int main()
{
	FClassA a;
	return 0;
}
