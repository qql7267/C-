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
	��ʽ���廯
	һ�����廯�������� ���а�������Ĵ��� ���������ҵ��뺯������ƥ��ľ��廯����ʱ ��ʹ�øö��� ������Ѱ��ģ��
	1.���ڸ����ĺ����� �����з�ģ�庯����ģ�庯������ʽ���廯ģ�庯���Լ����ǵ����ذ汾
	2.��ʽ���廯��ԭ�ͺͶ���Ӧ��template<>��ͷ ��ͨ��������ָ������
	3.���廯�����ڳ���ģ�� ����ģ�庯�������ھ��廯�ͳ���ģ��
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
	ʵ�����;��廯
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