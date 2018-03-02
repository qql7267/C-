#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	字符串 C-风格字符串
	可以将字符串存储在char数组中 其中每个字符都位于自己的数位元素中
	以空字符结尾 空字符被写作\0 起ASCII码为0 用来标记字符串的结尾
	*/
	//a1为char数组 a2为字符串
	char a1[4] = { 'a', 'b', 'c', 'd' };
	char a2[4] = { 'a', 'b', 'c', '\0' };
	//常用写法
	char a3[10] = "look here";
	char a4[] = "look at me";

	/*
	在数组中使用字符串 字符串输入
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