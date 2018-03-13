#include <iostream>
#include "myCppMyTime0.h"

int main()
{
	/*
	����ʱ��:һ�����������ʾ��
	*/
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "total time = ";
	total.Show();
	cout << endl;

	//��Ӽӷ������
	total = coding + fixing;
	cout << "coding + fixing time = ";
	total.Show();
	cout << endl;

	/*
	��������
	����C++��������������� ���ص������(��Щ�������)�����ǳ�Ա���� ������������һ�����������û����������
	����һ��C++���û��������������ص�����
	1.���غ�����������������һ�����������û���������� �⽫��ֹ�û�Ϊ��׼�������������
	2.ʹ�������ʱ����Υ�������ԭ���ľ䷨���� ͬ�� �����޸�����������ȼ�
	3.���ܴ����µ������
	4.������������������
	(1)sizeof sizeof�����
	(2). ��Ա�����
	(3).* ��Աָ�������
	(4):: ��������������
	(5)?: ���������
	(6)typeid һ��RTTI�����
	(7)const_cast ǿ������ת�������
	(8)dynamic_cast ǿ������ת�������
	(9)reinterpret_cast ǿ������ת�������
	(10)static_cast ǿ������ת�������
	5.����������������ͨ����Ա������ǳ�Ա������������ ������������ֻ��ͨ����Ա������������
	(1)= ��ֵ�����
	(2)() �������������
	(3)[] �±������
	(4)-> ͨ��ָ��������Ա�������
	�����ص������
	+ - * / % ^ & | += -= *= /= %= ^= &= = << >> >>= <<= == != <= >= && || ++ -- , ->* -> () [] new delete new[] delete[]
	*/

	//�������������
	total = coding - fixing;
	cout << "coding - fixing time = ";
	total.Show();
	cout << endl;

	total = coding * 1.5;
	cout << "coding * 1.5 time = ";
	total.Show();
	cout << endl;

	return 0;
}