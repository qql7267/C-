#include <iostream>
#include <cmath> // <math.h>
/*
由于函数用于创建C++程序的模块 对C++的OOP定义至关重要 所以必须熟悉他
现在来了解一些函数的基本知识
*/
int main()
{
	using namespace std;

	/*
	有返回值的函数将生成一个值 而这个值可赋给变量或在其他表达式中使用
	如 标准C/C++库包含一个名为sqrt()的函数 他返回平方根
	假如要计算6.25的平方根 然后将这个值赋给变量x 则可以有如下写法
	*/
	double x = sqrt(6.25);
	/*
	表达式sqrt(6.25)将调用sqrt()函数 
	sqrt(6.25)被称为函数调用 被调用的函数叫做被调用函数(called function)
	圆括号中的值(这里指6.25)是发送给函数的信息 被称为传递给函数 以这种方式发给函数的值叫做参数
	函数sqrt()得到的结果为2.5 并将这个值发给调用函数
	发送回去的值叫做函数的返回值(return value)
	可以这么认为 函数执行完毕后 语句中的函数调用部分将被替换为返回的值 因此 这个例子将返回值赋给变量x
	简言之 参数是发送给函数的信息 返回值是从函数中发送回去的值
	*/
	/*
	情况基本上就是这样 只是在使用函数前 C++编译器必须知道函数的参数类型和返回值类型
	也就是说 函数是返回整数、字符、小数等 如果缺少这些信息 编译器将不知道如何解释返回值
	C++提供这种信息的方式是使用函数原型语句
	*/
	/*
	函数原型之于函数就像变量声明之于变量 指出涉及的类型
	例如 C++库将sqrt()函数定义成将一个(可能)带小数部分的数字(如6.25)作为参数 并返回一个相同类型的数字
	*/
	double x1;
	x1 = sqrt(6.25);
	
	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	cout << "That's the equivalent of a square " << side
		<< "feet to the side." << endl;
	cout << "How fascination!" << endl;

	return 0;
}