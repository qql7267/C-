#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	�ַ��� C-����ַ���
	���Խ��ַ����洢��char������ ����ÿ���ַ���λ���Լ�����λԪ����
	�Կ��ַ���β ���ַ���д��\0 ��ASCII��Ϊ0 ��������ַ����Ľ�β
	*/
	//a1Ϊchar���� a2Ϊ�ַ���
	char a1[4] = { 'a', 'b', 'c', 'd' };
	char a2[4] = { 'a', 'b', 'c', '\0' };
	//����д��
	char a3[10] = "look here";
	char a4[] = "look at me";

	/*
	��������ʹ���ַ��� �ַ�������
	*/
	const int size = 15;
	char name1[size];
	char name2[size] = "C++owboy";

	cout << "Howdy! I'm " << name2 << "! What's your name?" << endl;
	cin >> name1;
	cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored" << endl;
	cout << "in an array of " << sizeof(name1) << " bytes." << endl;
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: " << name2 << endl;

	return 0;
}