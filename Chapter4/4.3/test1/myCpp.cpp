#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	string类
	要使用string类 必须在程序中包含头文件string
	*/

	/*
	C++字符串初始化
	*/
	char a1[] = { "123asd" };
	char a2[] { "123asd" };
	string a3 = { "123asd" };
	string a4 { "123asd" };

	/*
	赋值 拼接和附加
	*/
	//赋值
	char a5[20];
	char a6[20] = "123asd";
	string b1;
	string b2 = "234qwe";
	//a5 = a6;
	b1 = b2;
	//拼接
	string b3;
	b3 = b1 + b2;
	b1 += b2;

	/*
	string类的其他操作
	*/
	//下面这两个适用于C-字符串 string类则直接加即可
	//复制
	//strcpy(a1, a2);
	//附加到末尾
	//strcat(a5, a6);

	//两种确定字符串中字符数的方法
	//用于string类
	int len1 = b1.size();
	//用于C-字符串
	int len2 = strlen(a5);

	/*
	string类I/O
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