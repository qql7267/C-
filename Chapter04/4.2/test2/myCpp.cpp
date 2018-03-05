#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	每次读取一行字符串输入
	当不希望碰到空格结束输入时 可以使用getline()和get()
	这两个函数都读取一行输入 直到到达换行符
	然而随后getline()将丢弃换行符 而get()将换行符保留在输入序列中
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