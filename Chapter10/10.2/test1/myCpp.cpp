#include <iostream>

int main()
{
	/*
	抽象和类
	*/

	/*
	什么是类型
	1.决定数据对象需要的内存数量
	2.决定如何解释内存中的位
	3.决定可使用数据对象执行的操作或方法
	*/

	/*
	C++中的类
	类是一种将抽象转换为用户定义类型的C++工具 他将数据表示和操纵数据的方法组合成一个整洁的包
	一般来说 类规范由两个部分组成
	1.类声明 以数据成员的方式描述数据部分 一成员函数(被称为方法)的方式描述公有接口
	2.类方法定义 描述如何实现类成员函数
	为开发一个类并编写一个使用它的成 需要完成多个步骤
	通常 将接口(类定义)放在头文件中 并将实现(类方法的代码)放在源代码文件中
	*/

	class example_class
	{
	private:
		int a1;
		std::string a2;
		double a3;
		double a4;
		void set_a4(){ a3 = a4; }
	public:
		void func1();
		void func2(const std::string &b1, int a1);
	};
	/*
	关键字private和public描述了对类成员的访问控制
	使用类对象的程序都可以直接访问公有部分 但只能通过成员函数(或友元函数)来访问对象的私有成员
	类设计尽可能将公有接口和实现细节分开
	公有接口表示设计的抽象组将 将实现细节放在一起并将它们与抽象分开被称为封装 
	数据隐藏(将数据放在类的私有部分中)是一种封装 将实现的细节隐藏在私有部分中也是一种封装 将类函数定义和类声明放在不同的文件中也是一种封装
	数据隐藏不仅可以防止直接访问数据 还让开发者无需了解数据是如何被表示的
	
	无论类成员是数据成员还是成员函数 都可以在类的公有部分或私有部分中声明他
	但由于隐藏数据是OOP主要的目标之一 因此数据项通常放在私有部分 组成类接口的成员函数放在公有部分 否则就无法从城乡中调用这些函数
	也可以把成员函数放在私有部分中 不能直接从程序中调用这种函数 但公有方法却可以使用它们 通常使用私有成员函数来处理不属于共有接口的实现细节
	不必在类声明中使用关键字private 因为这是类对象的默认访问控制
	*/

	/*
	实现类成员函数
	还需要为那些由类声明中的原型表述的成员函数提供代码 
	成员函数定义和常规函数定义非常相似 他们有函数头和函数体 也可以有返回类型和参数 但是还是有两个特殊的特征
	1.定义成员函数时 使用作用于解析运算符(::)来表示函数所属的类
	2.类方法可以访问类的private组件
	例如 void example_class::func1();
	*/

	/*
	使用类
	要创建类对象 可以声明类变量 也可以使用new为类对象分配存储空间
	可以将对象作为函数的参数或返回值 也可以将一个对象赋给另一个
	*/

	/*
	修改实现
	*/

	/*
	小结
	指定类设计的第一步是提供类声明 类声明类似结构声明 可以包括数据成员和成员函数
	声明有私有部分 在其中声明的成员只能通过成员函数进行访问
	声明还具有公有部分 在其中声明的成员可被使用类对象的程序直接访问
	通常 数据成员被放在私有部分中 成员函数被放在公有部分中
	因此典型的类声明的格式如下
	class className
	{
	private:
		data member declarations
	public:
		member function prototypes
	};
	公有部分的内容构成了设计的抽象部分——公有接口
	将数据封装到私有部分中可以保护数据的完整性 这被称为数据隐藏
	因此C++通过类使得实现抽象、数据隐藏和封装等OPP特性很容易
	指定类设计的第二部是实现类成员函数 可以在类声明中提供完成的函数兴义 而不是函数原型 但是通常的做法是单独提供函数定义(除非函数很小)
	在这种情况下 需要使用作用于解析运算符来指出成员函数术语哪个类
	*/

	return 0;
}