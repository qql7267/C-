#include<iostream>
using namespace std;

/*
下面是5种基本的C++算术运算符
	+运算符对操作数执行假发运算
	-运算符从第一个数中减去第二个数
	*运算符将操作数相乘
	/运算符用第一个数除以第二个数
	%运算符求模 就是第一个数除以第二个数后的余数
*/

int main()
{
	//对于float C++只保证6位有效位 如果需要更高的精度 请使用double或long double
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	return 0;
}