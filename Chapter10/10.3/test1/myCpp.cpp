#include <iostream>

int main()
{
	/*
	类的构造函数和析构函数
	对于一个类来说 应为类提供被成文构造函数和析构函数的标准函数
	*/

	/*
	声明和定义构造函数
	*/

	/*
	使用构造函数
	C++提供了两种使用构造函数来初始化对象的方式
	第一种方式是显示的调用构造函数
	Stock garment = Stock("Furry Mason", 50, 2.5);
	另一种是隐式的调用构造函数 这种格式更紧凑 和上面的显式调用等价
	Stock garment("Furry Mason", 50, 2.5);
	每次创建类对象(甚至使用new动态分配内存)时 C++都使用类构造函数
	Stock *garment = new Stock("Furry Mason", 50, 2.5);
	*/

	/*
	默认构造函数
	默认构造函数是在未提供显式初始值时 用来创建对象的构造函数
	如果没有提供任何构造函数 则C++将自动提供默认构造函数 他是默认构造函数的隐式版本 不做任何工作
	Stock::Stock() { }
	当且仅当没有定义任何构造函数时 编译器才会提供默认构造函数
	*/

	/*
	析构函数
	当对象过期后 程序将自动调用一个特殊的成员函数——析构函数
	和构造函数一样 析构函数的名称也很特殊 要在类名前加上~ 另外和构造函数一样 析构函数也可以没有返回值和声明类型 但不同的是 析构函数没有参数
	因此Stock析构函数的原型必须是这样的
	~Stock();
	Stock::~Stock() { }
	*/

	/*
	改进Stock类
	*/

	/*
	构造函数和析构函数小结
	*/

	return 0;
}