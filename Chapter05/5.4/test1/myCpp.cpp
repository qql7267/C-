#include <iostream>
using namespace std;

int main()
{
	/*
	���ڷ�Χ��forѭ��
	C++11������һ��ѭ�� ���ڷ�Χ��forѭ��
	����˳�����ѭ�����񣺶�����(�������࣬��vector��array)��ÿһ��Ԫ��ִ����ͬ�Ĳ���
	*/
	double prices[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	for (double x : prices)
		cout << x << endl;

	for (int x : {6, 7, 8, 9})
		cout << x << endl;

	return 0;
}