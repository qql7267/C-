#include<iostream>
using namespace std;

int main()
{
	/*
	C++11新增了一个工具 让编译器能够根据初始值的类型推断变量的类型
	为此 他重新定义了auto的含义 auto是一个C语言的关键字 但很少使用
	在初始化生命中 如果使用关键字auto 而不指定变量的类型 编译器讲吧变量的类型设置成与初始值相同
	*/

	auto a1 = 100;		//int
	auto a2 = 1.5;		//double
	auto a3 = 1.3e13L;	//long double
	auto a4 = 0.0;		//double
	auto a5 = 0;		//int

	return 0;
}