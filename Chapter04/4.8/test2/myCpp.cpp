#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	ָ��С��
	Ҫ����ָ���ض����͵�ָ��
	typeName * pointerName
	Ӧ���ڴ��ַ����ָ�� ���ԶԱ�����Ӧ��&���������ñ��������ڴ�ĵ�ַ new���������δ�������ڴ�ĵ�ַ
	double * a1;
	double a1_1 = 3.0;
	a1 = &a1_1;
	double * a2 = new double;
	��ָ����������ζ�Ż��ָ��ָ���ֵ ��ָ��Ӧ�ý�����û���ֵ�����(*)���������
	cout << *a1;
	*a2 = 3.1;
	���a3��ָ��int��ָ�� ��*a3����ָ��int��ָ�� ������ȫ��ͬ��һ��int���͵ı��� a3����ָ��
	int * a3 = new int;
	*a3 = 4;
	�ڶ�������� C++����������Ϊ����ĵ�һ��Ԫ�صĵ�ַ
	int a4[10];
	C++������ָ���������� �������ԭ���ĵ�ֵַ����ԭ����ָ��Ķ���ռ�õ����ӽ��� Ҳ���Լ�ȥ ͬ��
	a4 = a4 + 1;
	a4 = a4 - 1;
	��̬���� ������ĳ����ڱ���ʱ����
	int a4[10];
	��̬����(��̬����) ����������ʱΪ�������ռ�
	int size;
	cin >> size;
	int * a5 = new int[size];
	delete [] a5;
	ʹ�÷����������ʾ����ͬ��ָ��������
	int * a6 = new int [10];
	*a6 = 5;
	a6[0] = 6;
	a6[9] = 7;
	int a6_1[10];
	*(a6_1 + 2) = 8;
	*/

	/*
	ָ����ַ���
	*/
	char a1[20] = "qwe";
	const char * a2 = "asd";
	char * a3;

	cout << a1 << ", " << a2 << endl;
	cout << "Enter a string: ";
	cin.getline(a1, 20);

	a3 = a1;
	cout << a3 << "!!!" << endl;
	cout << a1 << " at " << (int*)a1 << endl;
	cout << a3 << " at " << (int*)a3 << endl;

	a3 = new char[strlen(a1) + 1];
	//�������ֻ�������� ֻ���Ƶ�ַ�ϵ����� ���ǲ����Ƶ�ַ
	//strcpy(a3, a2);
	//��Ҫ���뻺����
	strcpy_s(a3, 20, a2);
	cout << a1 << " at " << (int*)a1 << endl;
	cout << a3 << " at " << (int*)a3 << endl;
	//delete [] a3;

	/*
	ʹ��new������̬�ṹ
	���ַ��ʽṹ��Ա��ָ���ʾ��
	*/
	struct bb
	{
		char c1[20];
		float c2;
		double c3;
	};

	bb * b1 = new bb;
	cout << "Enter c1(char): ";
	cin.get(b1->c1, 20);
	cout << "Enter c2(float):";
	cin >> b1->c2;
	cout << "Enter c3(double):";
	cin >> b1->c3;
	cout << "c1 = " << (*b1).c1 << endl;
	cout << "c2 = " << b1->c2 << endl;
	cout << "c3 = " << b1->c3 << endl;
	//delete b1;

	/*
	�Զ��洢����̬�洢�Ͷ�̬�洢
	C++�����ֹ��������ڴ�ķ�ʽ �ڴ���ʱ�䳤�̷��� �������ַ�ʽ��������ݶ��������ͬ
	1.�Զ��洢
	�ں����ڲ�����ĳ������ʹ���Զ��洢�ռ� �������ĺ���������ʱ�Զ����� �ڸú�������ʱ����
	2.��̬�洢
	��������ֱ���ڼ䶼���ڵĴ洢��ʽ
	һ�����ں������涨�� ��һ������������ʱʹ�ùؼ���static
	3.��̬�洢
	new��delete������ṩ��һ�ֱ��Զ������;�̬���������ķ���
	new��delete����һ�������з����ڴ� ������һ���������ͷ��� ������ݵ��������ڲ���ȫ�ܳ������������ʱ�����
	*/

	return 0;
}