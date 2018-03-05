#include <iostream>
using namespace std;

int main()
{
	/*
	指针和数组基本等价的原因在于指针算术(pointer arithmetic)和C++内部处理数组的方式
	C++将数组名解释为地址
	*/
	double a1[3] = { 10.0, 11.0, 12.0 };
	short a2[3] = { 3, 2, 1 };

	double * a1_p = a1;
	//a2是地址 a2[0]是数值
	short * a2_p = &a2[0];

	cout << "a1_p = " << a1_p << ", *a1_p = " << *a1_p << endl;
	a1_p = a1_p + 1;
	cout << "Add 1 to the a1_p pointer:" << endl;
	cout << "a1_p = " << a1_p << ", *a1_p = " << *a1_p << endl;

	cout << "a2_p = " << a2_p << ", *a2_p = " << *a2_p << endl;
	a2_p = a2_p + 1;
	cout << "Add 1 to the a2_p pointer:" << endl;
	cout << "a2_p = " << a2_p << ", *a2_p = " << *a2_p << endl;

	cout << "access two elements with array notation" << endl;
	cout << "a2[0] = " << a2[0] << ", a2[1] = " << a2[1] << endl;
	cout << "access two elements with pointer notation" << endl;
	cout << "*a2 = " << *a2 << ", *(a2 + 1) = " << *(a2 + 1) << endl;

	cout << sizeof(a1) << " = size of a1 array" << endl;
	cout << sizeof(a1_p) << " = size of pointer" << endl;

	/*
	数组名被解释为其第一个元素的地址
	而对数组名应用地址运算符时 得到的是整个数组的地址
	*/
	short a3[10];
	//是一个2字节内存块的地址 因此a3+1将地址值加2
	cout << a3 << endl;
	//是一个20字节内存块的地址 因此&a3+1将地址值加20
	cout << &a3 << endl;

	return 0;
}