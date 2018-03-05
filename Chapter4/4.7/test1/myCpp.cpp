#include <iostream>
using namespace std;

int main()
{
	/*
	声明和初始化指针
	指针声明必须指定指针指向的数据的类型 因为不同的类型存储值的时候使用的内部格式不同
	例如 int * pointer;
	这表明 pointer的类型时int 因为*运算符被用于指针 因此pointer变量本身必须是指针
	我们说pointer指向int类型 还说pointer的类型时指向int的指针 或int* 或者pointer是指针(地址) 而*pointer是int而不是指针
	*/
	//指针的几种写法
	int * p1;
	int* p2;
	int*p3;
	int* p4, p5;

	/*
	指针的危险
	C++创建指针时 计算机将分配用来存储地址的内存 但不会分配用来存储指针所指向的数据的内存
	一定要为数据提供空间是一个独立的步骤
	例如
	long * warning_p;
	*warning_p = 233;
	由于warning_p没有被初始化 他可能是任何值
	不管值是什么 程序都将他解释为存储233的地址 
	如果warning_p的值碰巧为110 计算机讲吧数据放在地址110上 即使这恰巧是程序代码的地址
	warning_p指向的地方很可能并不是要存储233的地方 这种错误可能会导致一些隐匿、最难以跟踪的bug
	*/

	/*
	指针和数字
	int * pt;
	pt = (int *)0x0000000;
	复制语句的两边都是整数的地址 这样赋值才有效
	*/

	return 0;
}