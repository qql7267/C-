#include <iostream>
using namespace std;

void swapr(int &a, int &b);
void swapp(int *a, int *b);
void swapv(int a, int b);

int main()
{
	/*
	���ñ���
	*/

	/*
	�������ñ���
	C++��&���Ÿ�������һ������ ����������������
	���� Ҫ��value_s��Ϊvalue�����ı��� ��������
	int value;
	int & value_s = value;
	���� &���ǵ�ַ����� �������ͱ�ʶ����һ���� int &ָ����ָ��int������
	������������������value��value_s���� ����ָ����ͬ��ֵ���ڴ浥λ
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
	������������������
	�޸ĵ���ԭʼ���������� �����Ǳ�������������
	��ָ��ͬ��
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
	��ʱ���������ò�����const
	���ʵ�������ò�����ƥ�� C++��������ʱ���� ��ǰ��������Ϊconst����ʱ C++������������
	*/

	/*
	������ʹ��const
	1.���Ա����������޸����ݵı�̴���
	2.ʹ�����ܹ�����const�ͷ�constʵ�� ����ֻ�ܽ��ܷ�const����
	3.�Ǻ����ܹ���ȷ���ɲ�ʹ����ʱ����
	*/
	
	/*
	�����������ṹ
	*/

	/*
	���������������(��string)
	*/

	/*
	��ʱʹ�����ò���

	ʹ�����ò�������Ҫԭ��
	1.����Ա�ܹ��޸ĵ��ú����е����ݶ���
	2.ͨ���������ö����������������� ������߳���������ٶ�

	ʲôʱ��ʹ������ ʲôʱ��ʹ��ָ�� ʲôʱ��ֵ����
	1.������ݶ����С �������������ͻ�С�ͽṹ ��ֵ����
	2.������ݶ��������� ��ʹ��ָ�� ��Ϊ��Ψһ��ѡ�� ����ָ������Ϊָ��const��ָ��
	3.������ݶ����ǽϴ�Ľṹ ��ʹ��constָ���const���� ����߳����Ч�� �������Խ�ʡ���ƽṹ�����ʱ��Ϳռ�
	4.������ݶ���������� ��ʹ��const���� ����Ƶ����峣��Ҫ��ʹ������ ��˴������������ı�׼��ʽ�ǰ����ô���

	�����޸ĵ��ú��������ݵĺ���
	1.������ݶ����������������� ��ʹ��ָ��
	2.������ݶ��������� ��ֻ��ʹ��ָ��
	3.������ݶ����ǽṹ ��ʹ�����û�ָ��
	4.������ݶ���������� ��ʹ������
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