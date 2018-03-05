#include <iostream>
using namespace std;

int main()
{
	/*
	ָ�����������ȼ۵�ԭ������ָ������(pointer arithmetic)��C++�ڲ���������ķ�ʽ
	C++������������Ϊ��ַ
	*/
	double a1[3] = { 10.0, 11.0, 12.0 };
	short a2[3] = { 3, 2, 1 };

	double * a1_p = a1;
	//a2�ǵ�ַ a2[0]����ֵ
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
	������������Ϊ���һ��Ԫ�صĵ�ַ
	����������Ӧ�õ�ַ�����ʱ �õ�������������ĵ�ַ
	*/
	short a3[10];
	//��һ��2�ֽ��ڴ��ĵ�ַ ���a3+1����ֵַ��2
	cout << a3 << endl;
	//��һ��20�ֽ��ڴ��ĵ�ַ ���&a3+1����ֵַ��20
	cout << &a3 << endl;

	return 0;
}