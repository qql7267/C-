#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	ÿ�ζ�ȡһ���ַ�������
	����ϣ�������ո��������ʱ ����ʹ��getline()��get()
	��������������ȡһ������ ֱ�����ﻻ�з�
	Ȼ�����getline()���������з� ��get()�����з�����������������
	*/
	const int size1 = 20;
	char b1[size1];
	cout << "Say something: " << endl;
	cin.getline(b1, size1);
	cout << "Look at this: " << b1 << " and this is what you said." << endl;

	char b2[size1];
	cout << "Say something: " << endl;
	cin.get(b2, size1);
	cout << "Look at this: " << b2 << " and this is what you said." << endl;

	return 0;
}