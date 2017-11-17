#include <iostream>
/*
有时候标准C库提供的140多个预定义的函数不能满足用户的要求 就需要用户自己编写函数
前面已经使用过好几个用户定义的函数 他们都叫main()
每个C++程序都必须有一个main()函数 用户必须对他进行定义
假设需要添加另一个用户定义的函数 和库函数一样 也可以通过函数名来调用用户定义的函数
对于库函数 在使用之前必须提供其原型 通常把原型放到main()定义之前 但现在必须提供新函数的源代码
最简单的方法是 将代码放在main()后面
*/

void simon(int);

/* 关于main()
开头的int表明 main()返回一个整数值 空括号(其中可以包含void)表明 main()没有函数
对于有返回值的函数 应使用关键字return来提供返回值并结束函数
这就是为什么要在main()的结尾使用 return 0 的原因
*/
int main()
{
	/*
	main()函数两次调用simon()函数
	一次的参数为3 领一次的参数为白能量count
	在这两次调用之间 用户输入一个整数 用来设置count的值
	*/
	using namespace std;
	simon(3);
	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

/*
simon()函数的定义与main()的定义采用的格式相同 
首先有一个函数头 然后是花括号的函数体
可以吧函数的格式统一为如下的情形
type functionname(argumentlist)
{
	statements
}
注意 定义simon()的源代码位于mian()的后面
和C一样 C++不允许将函数定义嵌套在另一个函数定义中 每个函数定义都是独立的 所有的函数的创建都是平等的
*/
/*
开头的void表明simon()没有返回值 因此调用simon不会生成可在main()中将其赋给变量的数字 即simon(3);
由于simon()没有返回值 所以不能如 simple = simon(3)这样使用它
*/
/*
括号中的 int n 表明使用simon()时应提供一个int参数 
n是一个新的变量 函数调用时传递的值将被赋给他
简言之 simon()的函数头表明该函数接收一个int参数 不反悔任何值
*/

void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}