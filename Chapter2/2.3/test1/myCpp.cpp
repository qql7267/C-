#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	/*
	从键盘输入的值最终被赋给变量carrots
	可知 信息从cin流向carrots C++将输入看做是流入程序的字符流
	iostream文件将cin定义为一个表示这种流的对象
	输出时 <<运算符将字符串插入到输出流中 
	输入时 cin使用>>运算符从输入流中抽取字符
	通常 需要在运算符右侧提供一个变量 以接收抽取的信息(符号<<和>>被选择用来指示信息流的方向)
	与cout一样 cin也是一个智能对象 他可以将通过键盘输入的一系列字符(即输入)转换为接收信息的变量能够接收的形式
	这里 程序将carrots声明为一个整形变量 因此输入被转换为计算机来村塾整数的数字形式
	*/
	/* 简述一下类
	类是C++中面向对象编程(OOP)的核心概念之一
	类是用户定义的一种数据类型 要定义类 需要描述他能够表示什么信息和可对数据执行哪些操作
	类之于对于对象就像类型之于变量 就是说 类定义描述的是数据格式及其用法 而对象则是根据数据格式规范创建的实体
	*/
	/*
	下面的代码将创建一个类型为int的变量(carrots)
	也就是说 carrots可存储整数 可以按特定的方式使用 例如用于加和减
	对于cout 他是个ostream类对象 ostream类定义(iostream文件的另一个成员)描述了ostream对象表示的数据以及可以对他执行的操作
	如将数字或字符串插入到输出流中
	同样 cin是一个istream类对象 也是在iostream中定义的
	*/
	cin >> carrots;
	cout << "Hero are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}