#include <iostream>
using namespace std;

template <typename T>
void print_value(T &value);

int main()
{
	/*
	����ģ��
	ͨ�õĺ������� ����ʹ�÷��������庯�� ���Ϳ��þ���������滻
	ͨ����������Ϊ�������ݸ�ĩ�� ��ʹ���������ɸ����͵ĺ��� Ҳ����Ϊͨ�ñ��
	�����������ò�����ʾ�� ���ģ��������ʱҲ����Ϊ����������
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
	���ص�ģ��
	*/

	/*
	ģ��ľ�����
	��д��ģ�庯���ܿ����޷�����ĳЩ���� ��int���ͺͽṹ���
	*/

	return 0;
}

template <typename T>
void print_value(T &value)
{
	cout << "value = " << value << endl;
}