#include <iostream>
using namespace std;

double func1(int);
double func2(int);
void func(int a1, double(*pf)(int));

int main()
{
	/*
	函数指针
	*/

	/*
	函数指针的基础知识
	1.获取函数的地址
	只需要使用函数名(后面不跟参数)即可
	如 void think();  process(think);
	2.声明函数指针
	声明应指定函数的返回类型遗迹函数的特征标(参数列表)
	原型 double pam(int);
	正确的指针类型声明 double (*pf)(int);
	(*pf)是函数 pf是指针函数
	为了提供正确的运算符优先级 必须在生命中使用括号将*pf括起
	3.使用指针来调用函数
	因为(*pf)和函数名相同 因此只需将(*pf)看做函数名
	double pam(int);
	double (*pf)(int);
	pf = pam;
	double x = pam(4);
	double y = (*pf)(5);
	实际上 C++也允许像函数名那样使用pf
	double t = pf(5);
	*/

	/*
	函数指针示例
	*/
	int a;
	cout << "Enter a: ";
	cin >> a;
	cout << "Result of func1 = ";
	func(a, func1);
	cout << "Result of func2 = ";
	func(a, func2);

	return 0;
}

double func1(int a1)
{
	return 0.05 * a1;
}

double func2(int a2)
{
	return 0.03 * a2 + 0.004 * a2 * a2;
}

void func(int a1, double(*pf)(int))
{
	cout << a1 << " is a1 and " << (*pf)(a1) << " is a2." << endl;
}