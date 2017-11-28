#include <iostream>

int main()
{
	using namespace std;

	/*
	输入时 cin将键盘输入的M(ch)转换为77
	输出时 cout将值77转换为所显示的字符M
	cin和cout的行为都是将变量类型引导的
	*/
	char ch1;
	cout << "Enter a character: " << endl;
	cin >> ch1; //输入M
	cout << "Hola! ";
	cout << "Thank you for the " << ch1 << " character." << endl;

	/*
	'M'表示字符M的数值编码 因此将char变量初始化为'M' 将把ch设置为77
	然后程序将同样的值赋给int变量i 这样ch和i的值都是77
	接下来 cout吧ch显示为M 而把i显示为77
	如前所述 值的类型将引导cout选择如何显示值
	*/
	/*
	由于ch实际上是一个整数 因为可以对他使用整数操作 如加1 
	这将把ch的值变为78 
	然后程序将i重新设置为新的制 cout再次将这个值的char版本显示为字符 将int版本显示为数字
	*/
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);

	/*
	cout.put()成员函数是一个重要的C++ OOP概念(成员函数)的一个例子
	类定义了如何表示和控制数据 成员函数归类所有 描述了操纵类数据的方法
	例如类ostream有一个put()的成员函数 用来输出字符
	只能通过类的特定对象(例如这里的cout对象)来使用成员函数 必须用句点将对象名和函数名称连接起来 句点被称为成员运算符
	cout.put()的意思是 通过类对象cout来使用函数put()
	*/
	cout.put('!');

	/*
	有些字符不能直接通过键盘输入到程序中
	例如 按回车键不能使字符串包含一个换行符 相反程序编辑器将把这种键击解释为在源代码中开始新的一行
	其他一些字符也无法从键盘输入 因为C++语言赋予了他们特殊的含义
	例如 双引号字符用来分割字符串字面值 因此不能把双引号放在字符串字面值中
	因此 C++提供了一种特殊的表示方法 转义序列
	*/
	/*
	字符名称	   ASCII符号	   C++代码    十进制ASCII码	 十六进制ASCII码
	换行符	   NL(LF)	   \n		 10				 0xA
	水平制表符   HT		   \t		 9				 0x9
	垂直制表符   VT		   \v		 11				 0xB
	退格		   BS		   \b		 8				 0x8
	回车		   CR		   \r		 13				 0xD
	振铃		   BEL		   \a		 7				 0x7
	反斜杠	   \		   \\		 92				 0x5C
	问号		   ?		   \?		 63				 0x3F
	单引号	   '		   \'		 39				 0x27
	双引号	   "		   \"		 34				 0x22
	*/
	cout << "\a" << endl;

	/*
	与int不同的是 char在默认情况下既不是没有符号也不是有符号 是否有符号由C++实现决定
	如果char有某种特定的行为十分重要 则可以显式的将类型设置为signed char或unsigned char
	*/
	char fodo;
	unsigned char bar;
	signed char snark;
	/*
	如果将char用作数值类型 则unsigned char和signed char之间的差异将非常重要
	unsigned char类型表示范围通常为0~255
	signed char类型表示范围为-128到127
	*/

	/*
	在计算中 布尔变量的值可以使true或false
	bool类型用来表达真和假 分别用预定义的字面值true和false
	C++中 非零值也解释为true 零解释为false
	*/
	bool is_ready = true;
	//字面值true和false都可以通过提升转换为int类型 true被转换为1 false被转换为0
	int ans = true;
	int promise = false;
	//另外 任何数字值或制针织都可以被隐式转换(即不用显示强制转换)为bool值 任何非零值都被转换为true 零被转换为false
	bool start = -100;
	bool stop = 0;

	return 0;
}