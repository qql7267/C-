#include <iostream>
using namespace std;

template <typename T>
void print_value(T &value);

int main()
{
	/*
	函数模板
	通用的函数描述 他们使用泛型来定义函数 泛型可用具体的类型替换
	通过将类型作为参数传递给末班 可使编译器生成该类型的函数 也被称为通用编程
	由于类型是用参数表示的 因此模板特性有时也被称为参数化类型
	template <typename T>
	void func(T &a, T &b)
	{ ... }
	*/
	int a1 = 1;
	print_value(a1);
	double a2 = 1.111;
	print_value(a2);
	char a3 = 'a';
	print_value(a3);

	/*
	重载的模板
	*/

	/*
	模板的局限性
	编写的模板函数很可能无法处理某些类型 如int类型和结构相加
	*/

	return 0;
}

template <typename T>
void print_value(T &value)
{
	cout << "value = " << value << endl;
}