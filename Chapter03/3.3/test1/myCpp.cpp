#include <iostream>
using namespace std;

/*
浮点数
使用浮点类型可以表示诸如2.5/3.14159和12345.67这样的数字
计算机将这样的值分成两部分存储 一部分表示值 另一部分用于对值进行放大或缩小
如12.3456和1234.56 他们除了小数点的位置不同外 其他都是相同的
可以吧第一个数表示成0.123456(基准值)和100(缩放因子) 第二个数表示成0.123456(基准值)和10000(缩放因子)
缩放因子的作用是移动小数点的位置 术语浮点因此而得名
C++内部表示浮点数的方法预期相同 只不过他是基于二进制数 因此缩放因子是2的幂而不是10的幂
这是内部的事情 不需要过于了解
浮点数能表示小数值、非常大和非常小的值 他们的内部表示方法与整数有天壤之别
*/

int main()
{
	/*
	C++有两种书写浮点数的方式 
	第一种是使用常用的标准小数点表示法
	*/
	float a1 = 12.34;		//floating-point
	float a2 = 999001.32;	//floating-point
	float a3 = 0.00023;		//floating-point
	float a4 = 8.0;			//still floating-point
	//即使小数部分为0 小数点也将确保改数字以浮点格式(而不是整数格式)表示

	/*
	第二种表示浮点值的方法叫做E表示法 
	其外观是这样的 3.45E6 这指的是3.45余1000000相乘的结果 E5指的是10的6次方 即1后面6个0
	因此 3.45E6表示的是3450000 6被称为只是 345被称为尾数
	下面是一些例子
	*/
	float b1 = 2.52e+8;		//可以使用E或者e +可加或不加
	float b2 = 8.33E-4;		//指数可以是负数
	float b3 = 7E5;			//和7.0E+05一样
	float b4 = -18.32e13;	//可以在前面加+或-符号
	float b5 = 1.69e12;		//2010年雷亚尔欠巴西的国债(可能是这个意思)
	float b6 = 5.98E24;		//地球的质量
	float b7 = 9.11e-31;	//一个电子的质量
	/*
	E表示法费适合非常大和非常小的数
	E表示法确保数字以浮点格式存储 即使没有小数点 注意 可以使用E或e 指数可以是正数也可以是负数 但是数字中不能有空格
	记住 d.ddE+n指的是将小数点向右移n位 而d.dddE~n指的是将小数点向左移n位 之所以成为“浮点” 就是因为小数点可以移动
	*/
	
	/*
	和ANSI C一样 C++页游3种浮点类型 float double和 long double
	这些类型是按他们可以表示的有效数位和允许的指数最小范围来描述的
	有效位(significant figure)是数字中有意义的位
	例如14179 使用了5个有效位 14000有效位有2个 其余三位只不过是占位符
	实际上 C和C++对于有效位数的要求是 float至少32位 double至少48位 且不少于float long double至少和double一样多
	这三种类型的有效位数可以一样多 然而通常 float有32位 double有64位 long double为80/96或128位
	另外 这三种类型的指数范围至少是-37到37
	可以从头文件cfloat或float.h中找到系统的显示(cfloat是C语言的float.h文件的C++版本)
	下面是Borland C++ Builder的float.h文件中的一些批注项
	*/
	//the following are the minimum number if significant dights
	#define DBL_DIG 15		//double
	#define FLT_DIG 6		//float
	#define LBBL_DIG 18		//long double

	//the following are the number if bits used to represent the mantissa
	#define DBL_MANT_DIG 53
	#define FLT_MANT_DIG 24
	#define LBBL_MANT_DIG 64

	//the following are the maximum and minimum exponent values
	#define DBL_MAX_10_EXP +308
	#define FLT_MAX_10_EXP +38
	#define LBBL_MAX_10_EXP +4932

	#define DBL_MIN_10_EXP -307
	#define FLT_MIN_10_EXP -37
	#define LBBL_MIN_10_EXP -4931

	/*
	float和double类型及他们表示数字时在精度方面的差异(即有效位数)
	这种调用迫使输出使用定点表示法 一边更好的了解精度 塌方致程序吧较大的值切换为E表示法 并使程序显示到小数点后6位
	参数ios_base::fixed和ios_base::floatfield是通过包含iostream来提供的常量
	*/
	cout.setf(ios_base::fixed, ios_base::floatfield); //fixed-point
	float tub = 10.0 / 3.0;		//good to about 6 places
	double mint = 10.0 / 3.0;	//good to about 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	
	/*
	浮点常量
	在程序中书写浮点常量的时候 默认情况下 像8.24和2.4E8这样的浮点常量都术语double类型
	如果希望常量为float类型 使用f或F后缀
	对于long double类型 可使用l或L后缀
	*/
	auto c1 = 1.234f;		//a float constant
	auto c2 = 2.45E20F;	//a float constant
	auto c3 = 2.34E22;	//a double constant
	auto c4 = 2.2L;	//a long double constant

	/*
	浮点数的优缺点
	与证书相比 浮点数有两大优点
	首先是他们可以表示整数之间的值 其次由于有缩放因子 他们可以表示的范围大得多
	另一方面 浮点运算的速度通常比整数运算慢 且精度将降低
	*/
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	/*
	该程序将数字加上1 然后减去原来的数字 结果应该为1 结果输出为0
	问题在于 2.34E+22是一个小数点左边有23位的数字
	加上1 就是在第23位加1
	但float类型只能表示数字中的前6位或前7位 因此修改第23位对这个值不会有任何影响
	*/

	return 0;
}