#include <iostream>

int main()
{
	using namespace std;

	/*
	这条语句提供了两项信息 需要的内存以及该内存单元的名称
	具体的来说 这条语句支出程序需要足够的存储空间来存储一个整数 编译器负责分配和标记内存的细节
	完成的第二项任务是给存储单元制定名称 
	这条语句指出 程序将使用名称carrots来标识存储在该内存单元中的值
	如果省略了该声明 当程序试图使用carrots时 编译器将指出错误
	因此声明通常指出了要存储的数据类型和程序对存储在这里的数据使用的名称
	*/
	/*
	程序中的声明语句叫做定义声明(defining declaration)语句 简称为定义(definition)
	这意味着他将导致编译器为变量分配内存空间
	在较为复杂的情况下 还可能有引用声明(reference declaration)
	这些声明命令计算机使用在其他地方定义的变量
	通常 声明不一定是定义 但在这个例子中 声明是定义
	*/
	int carrots;

	/*
	赋值语句将值赋给存储单元
	*/
	/*
	符号=叫做赋值运算符 C++(和C)有意向不寻常的特性 可以连续使用赋值运算符
	如 下列代码是合法的
	*/
	int a;
	int b;
	int c;
	c = b = a = 1; //复制姜葱右向左进行 首先1倍赋给a 然后a(1)的值被赋给b 然后b(1)的值被赋给c
	carrots = 25;
	cout << "I have ";
	/*
	程序没有打印“carrots”二十打印存储在carrots中的整数值
	实际上 将这两个操作合二为一了 首先 cout将carrots替换为其当前值25 然后把值转换为合适的输出字符
	[计算机不是单独存储每个数字 而是将25存储为二进制数 要点是 在打印之前 cout必须将整数型是的数字转换为字符串形式]
	*/
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	/*
	赋值运算符右边的表达式carrots-1是一个算式表达式 计算机将变量carrots的值25减去1 得到24
	然后赋值运算符将这个新值存储到变量carrots对应的内存单元中
	*/
	carrots = carrots - 1;
	/*
	与老式C语言的区别在于cout的聪明程度 
	在C语言中 要打印字符串“25”和整数25 可以使用C语言的多功能输出函数printf() 
	*/
	printf("Printing a string: %s\n", "25");
	printf("Printing an integer: %d\n", 25);
	/*
	撇开printf()的复杂性不说 必须用特殊代码(%s和%d)来指出是要打印字符串还是整数
	如果让printf()打印字符串但又错误的提供了一个整数 由于printf()不够精密
	因此根本发现不了错误 他将继续处理 显示一堆代码
	cout的智能行为院子C++的面向对象特性 
	实际上 C++插入运算符(<<)将根据其后的数据类型相依规定调整其行为
	[但是 printf()比cout要快]
	*/
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

	return 0;
}