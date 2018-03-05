#include <iostream>
using namespace std;

int main()
{
	/*
	C++的结构是一种比数组更灵活的数据格式 因为同一个结构可以存储多种类型的数据
	结构是用户定义的类型 结构声明定义了这种类型的数据属性 定义了类型后 便可以创建这种类型的变量
	因此创建结构包括两部 首先定义结构描述 然后按描述创建结构变量
	*/
	struct example
	{
		char a1[20];
		int a2;
		double a3;
	};

	/*
	在程序中使用结构
	*/
	example b1 = 
	{
		"123asd",
		3,
		2.34,
	};
	example b2 = { "234qwe", 4, 5.67 };
	cout << "b1 is a1 = " << b1.a1 << " and a2 = " << b1.a2 << " and a3 = " << b1.a3 << endl;

	/*
	C++11 结构初始化
	*/
	//如果大括号不包含任何东西 每个成员都将被设置为0 字符串被设置为'\0'
	example b3 {};
	cout << "b3 is a1 = " << b3.a1 << " and a2 = " << b3.a2 << " and a3 = " << b3.a3 << endl;

	/*
	其他结构属性
	*/
	//几种初始化方式
	struct c1
	{
		int d1;
		string d2;
	} example_c1;

	struct c2
	{
		int d3;
		string d4;
	} example_c2 =
	{
		1,
		"qqq",
	};

	struct
	{
		int d5;
		string d6;
	} example_c3;

	/*
	结构数组
	*/
	struct e1
	{
		string f1;
		double f2;
	};
	e1 example_e1[2] = 
	{
		{ "aaa", 1.11 },
		{ "bbb", 2.22 },
	};

	return 0;
}