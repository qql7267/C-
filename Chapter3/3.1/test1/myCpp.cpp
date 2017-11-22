#include <iostream>
using namespace std;

int main()
{
	/*
	C++提倡使用有一定含义的变量名
	必须遵循集中简单的C++命名规则
	1在名称中使用使用字母字符、数字和下划线(_)
	2名称的第一个字符不能是数字
	3区分大写字符与小写字符
	4不能将C++关键字用作名称
	5以两个下划线或下划线和大写字母大头的名称被保留给实现(编译器及其使用的资源)使用 以一个下划线开头的名称被保留给实现 用作全局标识符
	6C++对于名称的长度没有限制 名称中所有的字符都有意义 但有些平台有长度限制
	倒数第二条与前面几点有些不同 因为使用像temp_stop或_Donut这样的名称不会导致编译器错误 而会导致行为的不确定性
	最后一点使得C++与ANSI C(C99标准)有所区别 后者只保证名称中的前63个字符有意义
	*/
	/*
	下面是一些有效和无效的C++名称 无效的已注释
	*/
	int poodle;
	int Poodle;
	int POODLE;
	int terrier;
	int my_stars3;
	int _Mystars3;
	//int 3ever;
	//int double;
	int begin;
	int __fools;
	int the_very_best_variable_i_can_be_versuib_112;
	//int honky-tonk;

	return 0;
}