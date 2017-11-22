#include <iostream>
/*
头文件climits定义了符号常量来表述类型的显示
符号常量				表示
CHAR_BIT			char的位数
CHAR_MAX			char的最大值
CHAR_MIN			char的最小值
SCHAR_MAX			signed char的最大值
SCHAR_MIN			signed char的最小值
UCHAR_MAX			unsigned char的最大值
SHRT_MAX			short的最大值
SHRT_MIN			short的最小值
USHRT_MAX			unsigned short的最大值
INT_MAX				int的最大值
INT_MIN				int的最小值
UINT_MAX			unsigned int的最大值
LONG_MAX			long的最大值
LONG_MIN			long的最小值
ULONG_MAX			unsigned long的最大值
LLONG_MAX			long long的最大值
LLONG_MIN			long long的最小值
ULLONG_MAX			unsigned long long的最大值
*/
#include <climits>

int main()
{
	using namespace std;

	/* 整型
	整型就是没有小数部分的数字
	整数有很多 如果将无限大的整数看做很大 则不可能用有限的计算机内存来表述所有的整数 因此语言只能表述所有整数的一个自己
	有些语言只提供一种整数(一种类型满足所有要求) 而C++则提供好几种 这样能够根据程序的具体要求选择最适合的整型
	不同C++整型使用不同的内存量来存储整数 使用的内存量越大 可以表述的整数值范围也越大 另外有的类型(符号类型)可表示正值和负值 而有的类型(无符号类型)不能表示负数
	属于宽度(width)用于描述存储整数时使用的内存量 使用的内存越多则越大
	C++的基本整型(按宽度递增的顺序排列)分别是char、short、int、long和C++11新增的long long 其中每种类型都有有符号版本和无符号版本
	因此总共有10种类型可供选择 char类型有些特殊属性(最常用于表示字符而不是数字)
	*/
	/* 整型short、int、long和long long
	计算机内存由一些叫做位(bit)的单元组成
	C++的short、int、long和long long类型通过使用不同数目的位来存储之 最多能够表示4种不同的整数宽度
	如果在所有的系统中 每种类型的宽度都相同 则用起来将非常方便
	所以C++提供了一种灵活的标准 他确保了最小长度(从C语言借鉴而来)
	1short至少16位
	2int至少与short一样长
	3long至少32位 且至少与int一样长
	4long long至少64位 且至少与long一样长
	*/
	/*
	实际上 short是short int的简称 而long是long int的简称
	*/
	short score;
	int temperature;
	long position;

	/* 初始化
	初始化将复制与生命合并在一起
	如下面语句 生命了变量n_int 并将int的最大值赋给他
	*/
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	/*
	也可以使用字面值常量来初始化 可以将变量初始化为另一个变量 条件是后者已经定义过
	甚至可以使用表达式来初始化变量 条件是当程序执行到该声明是 表达式中所有的值都是已知的
	*/
	int uncles = 5;
	int aunts = uncles;
	int chairs = aunts + uncles + 4;
	/*
	前面的初始化语法来自C语言 C++还有另一种C语言没有的初始化语法
	*/
	int owls = 101;
	int wrens(432);
	/*
	如果知道变量的初始值应该是什么 则应对他进行初始化 将变量声明和赋值分开 则可能会带来瞬间悬而未决的问题
	然而 在声明变量是对他进行初始化 可避免以后忘记给他赋值的情况发生
	*/
	short year;
	year = 1492;
	/*
	还有另一种初始化方式 这种方式用于数组和结构 但在C++98中 也可用于单值变量
	*/
	int hamburgers = { 24 };
	/*
	将大括号初始化器用于单值变量的情形还不多 但C++11标准使得这种情形更多了
	首先 采用这种方式时 可以使用等号(=) 也可以不使用
	*/
	int emus{ 7 };
	int rheas = { 12 };
	/*
	其次 大括号内可以不包含任何东西
	这种情况下 变量将被初始化为零
	*/
	int rocs = {};
	int psychics{};

	/*
	sizeof运算符指出 在使用8位字节的系统中 int的长度为4个字节
	可对类型名或变量名使用sizeof运算符 对类型名(如int)使用sizeof运算符是 应将名称放在括号中 但对变量名(如n_short)使用该运算符 括号是可选的
	*/
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;

	return 0;
}