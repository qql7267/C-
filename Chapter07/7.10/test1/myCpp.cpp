#include <iostream>
using namespace std;

double func1(int);
double func2(int);
void func(int a1, double(*pf)(int));

int main()
{
	/*
	����ָ��
	*/

	/*
	����ָ��Ļ���֪ʶ
	1.��ȡ�����ĵ�ַ
	ֻ��Ҫʹ�ú�����(���治������)����
	�� void think();  process(think);
	2.��������ָ��
	����Ӧָ�������ķ��������ż�������������(�����б�)
	ԭ�� double pam(int);
	��ȷ��ָ���������� double (*pf)(int);
	(*pf)�Ǻ��� pf��ָ�뺯��
	Ϊ���ṩ��ȷ����������ȼ� ������������ʹ�����Ž�*pf����
	3.ʹ��ָ�������ú���
	��Ϊ(*pf)�ͺ�������ͬ ���ֻ�轫(*pf)����������
	double pam(int);
	double (*pf)(int);
	pf = pam;
	double x = pam(4);
	double y = (*pf)(5);
	ʵ���� C++Ҳ��������������ʹ��pf
	double t = pf(5);
	*/

	/*
	����ָ��ʾ��
	*/
	int a;
	cout << "Enter a: ";
	cin >> a;
	cout << "Result of func1 = ";
	func(a, func1);
	cout << "Result of func2 = ";
	func(a, func2);

	return 0;
}

double func1(int a1)
{
	return 0.05 * a1;
}

double func2(int a2)
{
	return 0.03 * a2 + 0.004 * a2 * a2;
}

void func(int a1, double(*pf)(int))
{
	cout << a1 << " is a1 and " << (*pf)(a1) << " is a2." << endl;
}