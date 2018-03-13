#include <iostream>

int main()
{
	/*
	友元
	另一种形式的访问权限来访问类对象的私有部分
	友元有三种
	1.友元函数
	2.友元类
	3.友元成员函数
	创建友元函数的第一步是将其原型放在类声明中 并在原型声明前加上关键字friend
	friend Time operator*(double m, const Time &t);
	该原型意味着下面两点
	1.虽然operator*()函数是在类声明中声明的 但他不是成员函数 因此不能使用成员运算符来调用
	2.虽然operator*()函数不是成员函数 但他与成员函数的访问权限相同
	*/

	/*
	常用的友元:重载<<运算符
	*/

	return 0;
}