#include <iostream>
using namespace std;

int main()
{
	/*
	����(array)��һ�����ݸ�ʽ �ܹ��洢���ͬ���͵�ֵ ÿ��ֵ���洢��һ������������Ԫ���� ��������ڴ������δ洢����ĸ���Ԫ��
	Ҫ�������� ��ʹ���������
	��������Ӧָ����������
	1.�洢��ÿ��Ԫ���е�ֵ������
	2.������
	3.�����е�Ԫ����
	ͨ�ø�ʽ typeName arrayName[arraySize];
	���Ե�����������Ԫ�� ������ʹ���±����������Ԫ�ؽ��б��
	C++�����0��ʼ���
	*/

	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20, 30, 5 };

	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << "yams costs " << yamcosts[1] << " cents per yam." << endl;

	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents." << endl;

	cout << "Size of yams array = " << sizeof yams << " bytes." << endl;
	cout << "Size of one element = " << sizeof yams[0] << " bytes." << endl;

	/*
	����ĳ�ʼ������
	*/
	int a1[4] = { 3, 6, 8, 10 };
	int a2[4];
	//a1[4] = { 5, 6, 7, 8 };
	//a2 = a1;

	//��ʼ�������� �ṩ��ֵ�������������Ԫ����Ŀ
	float a3[5] = { 5.0, 2.5 };
	//���ֻ�������һ���ֽ��г�ʼ�� ���������������Ԫ������Ϊ0
	long a4[500] = { 0 };
	//�����ʼ��Ϊ{1} ���һ��Ԫ�ر�����Ϊ1 ����Ԫ�ض�������Ϊ0
	//�����ʼ������ʱ��������Ϊ�� C++������������Ԫ�ظ���
	short a5[] = { 1, 2, 3, 4 };

	/*
	C++11�����ʼ������
	*/
	//��ʼ������ʱ ����ʡ�ԵȺ�
	double b1[4] {1, 1.2e2, 3.3e-3};
	//���Բ��ش������ڰ����κζ��� �⽫������Ԫ������Ϊ0
	unsigned int b2[10] = {};
	//�б��ʼ��������խת��
	long b3[] = { 25, 92, 3.0 };
	char b4[4] = { 'a', 's', 123, '\0' };
	char b5[4] = { 'a', 's', 1234567, '\0' };

	return 0;
}