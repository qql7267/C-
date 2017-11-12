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
using namespace std;

int main()
{
	cout << "Nothing is impossible to a willing heart." << endl;
	return 0;
}