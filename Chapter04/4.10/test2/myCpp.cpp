#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	/*
	比较数组 vector对象和array对象
	*/

	double a1[4] = { 1.1, 2.2, 3.3, 4.4 };

	vector<double> a2(4);
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;

	array<double, 4> a3 = { 5.5, 6.6, 7.7, 8.8 };
	array<double, 4> a4;
	a4 = a3;

	cout << "a1[2]:" << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]:" << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]:" << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]:" << a4[2] << " at " << &a4[2] << endl;

	a1[-2] = 9.9;
	cout << "a1[-2]:" << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]:" << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]:" << a4[2] << " at " << &a4[2] << endl;

	/*
	注意
	a1[-2]即*(a1-2)
	将信息存储到了数组的外面 C++和C语言都不会检查这种超界错误 这种行为是不安全的
	然后 还有其他选择 一种选择是世勇成员函数at() 可以使用vector和array对象的成员函数at()
	这样的话可以在运行期间捕获非法索引 而程序默认将中断 可以降低意外超界错误的概率
	a2.at(1) = 1.01;
	*/

	return 0;
}