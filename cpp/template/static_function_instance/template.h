#pragma once

#include <iostream>
#include <string>
using namespace std;

template<typename T>
struct TName
{
	static string& GetNameRef()	{ static string name="def"; return name; }
	static string GetName()		{ return GetNameRef(); }
};

struct FLibSAS {};
struct FLibSAF {};
struct FLibSBS1 {};
struct FLibSBF1 {};
struct FLibSBS2 {};
struct FLibSBF2 {};
void func_libs_a();
void func_libs_b1();
void func_libs_b2();

struct FLibDAS {};
struct FLibDAF {};
struct FLibDBS1 {};
struct FLibDBF1 {};
struct FLibDBS2 {};
struct FLibDBF2 {};
void func_libd_a();
void func_libd_b1();
void func_libd_b2();

struct FCppAS {};
struct FCppAF {};
struct FCppBS {};
struct FCppBF {};
struct FCppMS1{};
struct FCppMS2{};
struct FCppMF{};
void func_cpp_a();
void func_cpp_b();

struct Temp
{

static void PrintNames()
{
	cout<<endl;
	cout<<"FCppAS: ==> "<<TName<FCppAS>::GetName() <<endl;
	cout<<"FCppAF: ==> "<<TName<FCppAF>::GetName() <<endl;
	cout<<"FCppBS: ==> "<<TName<FCppBS>::GetName() <<endl;
	cout<<"FCppBF: ==> "<<TName<FCppBF>::GetName() <<endl;
	cout<<endl;
	cout<<"FLibSAS: ==> "<<TName<FLibSAS>::GetName() <<endl;
	cout<<"FLibSAF: ==> "<<TName<FLibSAF>::GetName() <<endl;
	cout<<"FLibSBS1: ==> "<<TName<FLibSBS1>::GetName() <<endl;
	cout<<"FLibSBF1: ==> "<<TName<FLibSBF1>::GetName() <<endl;
	cout<<"FLibSBS2: ==> "<<TName<FLibSBS2>::GetName() <<endl;
	cout<<"FLibSBF2: ==> "<<TName<FLibSBF2>::GetName() <<endl;
	cout<<endl;
	cout<<"FLibDAS: ==> "<<TName<FLibDAS>::GetName() <<endl;
	cout<<"FLibDAF: ==> "<<TName<FLibDAF>::GetName() <<endl;
	cout<<"FLibDBS1: ==> "<<TName<FLibDBS1>::GetName() <<endl;
	cout<<"FLibDBF1: ==> "<<TName<FLibDBF1>::GetName() <<endl;
	cout<<"FLibDBS2: ==> "<<TName<FLibDBS2>::GetName() <<endl;
	cout<<"FLibDBF2: ==> "<<TName<FLibDBF2>::GetName() <<endl;
}
};
