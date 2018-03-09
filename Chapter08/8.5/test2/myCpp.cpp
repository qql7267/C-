#include <iostream>
using namespace std;

template < typename T > 
void swap_T(T &s1, T &s2);

struct s
{
	char a1[60];
	double a2;
	int a3;
};

template <> void swap_T<s>(s &s1, s &s2);
void show(s &s_s);

int main()
{
	/*
	显式具体化
	一个具体化函数定义 其中包含所需的代码 当编译器找到与函数调用匹配的具体化定义时 将使用该定义 而不再寻找模板
	1.对于给定的函数名 可以有非模板函数、模板函数和显式具体化模板函数以及他们的重载版本
	2.显式具体化的原型和定义应以template<>打头 并通过名称来指出类型
	3.具体化优先于常规模板 而非模板函数优先于具体化和常规模板
	*/

	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 1, j = 2;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Using compiler-generated int swapper: " << endl;
	swap_T(i, j);
	cout << "Now i, j = " << i << ", " << j << endl;

	s s1 = { "a1", 1.11, 1 };
	s s2 = { "a2", 2.22, 2 };
	cout << "Before s's are : " << endl;
	show(s1);
	show(s2);
	swap_T(s1, s2);
	cout << "After s's are : " << endl;
	show(s1);
	show(s2);

	/*
	实例化和具体化
	*/

	return 0;
}

template < typename T >
void swap_T(T &s1, T &s2)
{
	cout << "swap as common." << endl;
	T temp = s1;
	s1 = s2;
	s2 = temp;
}

template <> void swap_T<s>(s &s1, s &s2)
{
	cout << "swap as struct." << endl;
	double a2_v = s1.a2;
	s1.a2 = s2.a2;
	s2.a2 = a2_v;
	int a3_v = s1.a3;
	s1.a3 = s2.a3;
	s2.a3 = a3_v;
}

void show(s &s_s)
{
	cout << "a1 = " << s_s.a1 << " and a2 = " << s_s.a2 << " and a3 = " << s_s.a3 << endl;
}