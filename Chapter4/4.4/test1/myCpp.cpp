#include <iostream>
using namespace std;

int main()
{
	/*
	C++�Ľṹ��һ�ֱ�������������ݸ�ʽ ��Ϊͬһ���ṹ���Դ洢�������͵�����
	�ṹ���û���������� �ṹ�����������������͵��������� ���������ͺ� ����Դ����������͵ı���
	��˴����ṹ�������� ���ȶ���ṹ���� Ȼ�����������ṹ����
	*/
	struct example
	{
		char a1[20];
		int a2;
		double a3;
	};

	/*
	�ڳ�����ʹ�ýṹ
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
	C++11 �ṹ��ʼ��
	*/
	//��������Ų������κζ��� ÿ����Ա����������Ϊ0 �ַ���������Ϊ'\0'
	example b3 {};
	cout << "b3 is a1 = " << b3.a1 << " and a2 = " << b3.a2 << " and a3 = " << b3.a3 << endl;

	/*
	�����ṹ����
	*/
	//���ֳ�ʼ����ʽ
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
	�ṹ����
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