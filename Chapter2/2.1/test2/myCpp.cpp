/*--头文件--------------------------------------------------*/
/*C++98标准
该编译指令导致预处理器将iostream文件的内容添加到程序中
这是一个典型的预处理器操作：在源代码被编译之前，替换或添加文本

如下 #include编译指令导致iostream文件的内容随源代码文件的内容一起呗发送给编译器
实际上 iostream文件的内容将取代程序中的代码行#include<iostream>
原始文件没有被修改 而是将源代码文件和iostream组合成一个复合文件
编译的下一阶段将使用该文件
*/
/*
像iostream这样的文件叫做包含文件 由于他们被包含在其他文件中 也叫头文件
[头文件类型]	[约定]				[示例]		[说明]
C++旧式风格	以.h结尾				iostream.h	C++程序可以使用
C旧式风格		以.h结尾				math.h		C、C++程序可以使用
C++新式风格	没有扩展名			iostream	C++程序可以使用，使用namespace std
转换后的C		加上前缀c，没有扩展名	cmath		C++程序可以使用，可以使用不是C的特性，如namespace std
*/
#include <iostream>
/*--名称空间---------------------------------------------------*/
/*
名称空间是一项C++特性 旨在编写大型程序以及将多个厂商现有的代码组合起来的程序时更为容易
如：可能使用两个已封装好的产品 而他们都包含一个名为create()的函数
这样在使用create()时 编译器不知道指的是那个版本的 名称空间能让编译器知道是哪个版本的
即 a::create()和 b:create()
*/
/*
类、函数和变量便是C++编译器的标准组件 他们现在都被放置在名称空间std中
仅当头文件没有扩展名h时 情况才是如此
这意味着在iostream中定义的用于输出的cout变量实际是std::cout endl实际是std::endl
*/
/*
然而有的时候不想讲引用名称空间之前的代码（使用iostream.h和cout）转化为名称空间代码（使用iostream和std::cout）
除非他们可以不费力的完成这种转换
于是 便有了using编译指令
下列代码就表明可以使用std名称空间中定义的名称而不必使用std::前缀
*/
using namespace std;
/*
这个using编译指令使得std名称空间中所有名称都可用
这是个偷懒的方法 在大型项目中是一个潜在的问题
更好的方法是只是所需的名称可用 这可通过使用using声明来实现
如下：
*/
using std::cout;
using std::endl;
using std::cin;

int main()
{
	/* cout
	双引号起的部分是要打印的消息 
	<<符号表示将把这个字符串发送给cout 该符号指出了信息流动的路径
	cout有一个好处 当不知道对象的内部情况时就可以使用它 只需要知道的他的接口即可
	*/
	/* endl
	endl是一个特殊的C++符号 表示重启一行
	*/
	/* \n
	\n换行符 是来自于C语言的旧方法 被视为一个字符 可以替代endl减少输入量
	*/
	cout << "Nothing is impossible to a willing heart. \n" << endl;
	//可省略using 写作
	std::cout << "Nothing is impossible to a willing heart." << std::endl;
	return 0;
}