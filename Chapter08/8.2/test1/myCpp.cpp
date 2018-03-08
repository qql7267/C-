#include <iostream>
using namespace std;

void swapr(int &a, int &b);
void swapp(int *a, int *b);
void swapv(int a, int b);

int main()
{
	/*
	引用变量
	*/

	/*
	创建引用变量
	C++给&符号赋予了另一个含义 将其用来声明引用
	例如 要将value_s作为value变量的别名 可以这样
	int value;
	int & value_s = value;
	其中 &不是地址运算符 而是类型标识符的一部分 int &指的是指向int的引用
	上述引用声明允许将value和value_s互换 他们指向相同的值和内存单位
	*/

	int a1 = 1;
	int & a2 = a1;
	int * a3 = &a1;
	cout << "a1 = " << a1 << " and &a1 = " << &a1 << endl;
	cout << "a2 = " << a2 << " and &a2 = " << &a2 << endl;
	cout << "a3 = " << *a3 << " and &a3 = " << a3 << endl;
	cout << "---------------------------------------------" << endl;
	a1++;
	cout << "a1 = " << a1 << " and &a1 = " << &a1 << endl;
	cout << "a2 = " << a2 << " and &a2 = " << &a2 << endl;
	cout << "a3 = " << *a3 << " and &a3 = " << a3 << endl;
	cout << "---------------------------------------------" << endl;

	/*
	将引用用作函数参数
	修改的是原始变量的内容 而不是变量本身的内容
	与指针同理
	*/
	int s1, s2;
	s1 = 2;
	s2 = 3;
	cout << "s1 = " << s1 << " and s2 = " << s2 << endl;
	swapr(s1, s2);
	cout << "s1 = " << s1 << " and s2 = " << s2 << endl;
	s1 = 2;
	s2 = 3;
	swapp(&s1, &s2);
	cout << "s1 = " << s1 << " and s2 = " << s2 << endl;
	s1 = 2;
	s2 = 3;
	swapv(s1, s2);
	cout << "s1 = " << s1 << " and s2 = " << s2 << endl;

	/*
	临时变量、引用参数和const
	如果实参与引用参数不匹配 C++将生成临时变量 当前仅当参数为const引用时 C++才允许这样做
	*/

	/*
	尽可能使用const
	1.可以避免无意中修改数据的编程错误
	2.使函数能够处理const和非const实参 否则只能接受非const数据
	3.是函数能够正确生成并使用临时变量
	*/
	
	/*
	将引用用作结构
	*/

	/*
	将引用用作类对象(如string)
	*/

	/*
	何时使用引用参数

	使用引用参数的主要原因
	1.程序员能够修改调用函数中的数据对象
	2.通过传递引用而不是整个函数对象 可以提高程序的运行速度

	什么时候使用引用 什么时候使用指针 什么时候按值传递
	1.如果数据对象很小 如内置数据类型或小型结构 则按值传递
	2.如果数据对象是数组 则使用指针 因为是唯一的选择 并将指针声明为指向const的指针
	3.如果数据对象是较大的结构 则使用const指针或const引用 以提高程序的效率 这样可以节省复制结构所需的时间和空间
	4.如果数据对象是类对象 则使用const引用 类设计的语义常常要求使用引用 因此传递类对象参数的标准方式是按引用传递

	对于修改调用函数中数据的函数
	1.如果数据对象是内置数据类型 则使用指针
	2.如果数据对象是数组 则只能使用指针
	3.如果数据对象是结构 则使用引用或指针
	4.如果数据对象是类对象 则使用引用
	*/

	return 0;
}

void swapr(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swapp(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapv(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}