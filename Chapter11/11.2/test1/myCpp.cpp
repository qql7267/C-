#include <iostream>
#include "myCppMyTime0.h"

int main()
{
	/*
	计算时间:一个运算符重载示例
	*/
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "total time = ";
	total.Show();
	cout << endl;

	//添加加法运算符
	total = coding + fixing;
	cout << "coding + fixing time = ";
	total.Show();
	cout << endl;

	/*
	重载限制
	多数C++运算符都可以重载 重载的运算符(有些例外情况)不必是成员函数 但必须至少有一个操作数是用户定义的类型
	介绍一下C++对用户定义的运算符重载的限制
	1.重载后的运算符必须至少有一个操作数是用户定义的类型 这将防止用户为标准类型重载运算符
	2.使用运算符时不能违反运算符原来的句法规则 同样 不能修改运算符的优先级
	3.不能创建新的运算符
	4.不能重载下面的运算符
	(1)sizeof sizeof运算符
	(2). 成员运算符
	(3).* 成员指针运算符
	(4):: 作用域解析运算符
	(5)?: 条件运算符
	(6)typeid 一个RTTI运算符
	(7)const_cast 强制类型转换运算符
	(8)dynamic_cast 强制类型转换运算符
	(9)reinterpret_cast 强制类型转换运算符
	(10)static_cast 强制类型转换运算符
	5.大多数运算符都可以通过成员函数或非成员函数进行重载 但下面的运算符只能通过成员函数进行重载
	(1)= 赋值运算符
	(2)() 函数调用运算符
	(3)[] 下表运算符
	(4)-> 通过指针访问类成员的运算符
	可重载的运算符
	+ - * / % ^ & | += -= *= /= %= ^= &= = << >> >>= <<= == != <= >= && || ++ -- , ->* -> () [] new delete new[] delete[]
	*/

	//其他重载运算符
	total = coding - fixing;
	cout << "coding - fixing time = ";
	total.Show();
	cout << endl;

	total = coding * 1.5;
	cout << "coding * 1.5 time = ";
	total.Show();
	cout << endl;

	return 0;
}