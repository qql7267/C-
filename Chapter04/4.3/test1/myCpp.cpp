#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	string��
	Ҫʹ��string�� �����ڳ����а���ͷ�ļ�string
	*/

	/*
	C++�ַ�����ʼ��
	*/
	char a1[] = { "123asd" };
	char a2[] { "123asd" };
	string a3 = { "123asd" };
	string a4 { "123asd" };

	/*
	��ֵ ƴ�Ӻ͸���
	*/
	//��ֵ
	char a5[20];
	char a6[20] = "123asd";
	string b1;
	string b2 = "234qwe";
	//a5 = a6;
	b1 = b2;
	//ƴ��
	string b3;
	b3 = b1 + b2;
	b1 += b2;

	/*
	string�����������
	*/
	//����������������C-�ַ��� string����ֱ�ӼӼ���
	//����
	//strcpy(a1, a2);
	//���ӵ�ĩβ
	//strcat(a5, a6);

	//����ȷ���ַ������ַ����ķ���
	//����string��
	int len1 = b1.size();
	//����C-�ַ���
	int len2 = strlen(a5);

	/*
	string��I/O
	*/
	char str1[20];
	string str2;

	cout << "Enter a chars: ";
	cin.getline(str1, 20);
	cout << "And enter a string: ";
	getline(cin, str2);
	cout << "You enter a chars, it is " << str1 << ".And then you enter a string, it is " << str2 << ".\n";

	return 0;
}