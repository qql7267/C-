#include <iostream>
using namespace std;

int main()
{
	/*
	C++的enum工具提供了另一种创建符号常量的方式 
	这种方式可以代替const 还允许定义新类型 但必须按严格的限制进行 使用enum的句法与使用结构相似
	*/
	enum color { red, blue, green, white, black, pink, yellowm, orange };
	/*
	这行语句完成了两项工作
	1.让color成为新类型的名称 color被称为枚举
	2，将red、blue等作为符号常量 他们对应整数值0~7 这些常量叫做枚举量
	*/

	//一些枚举变量的允许与不允许
	color example_color1;
	example_color1 = blue;
	//example_color1 = 2000;

	example_color1 = orange;
	//example_color1++;
	//example_color1 = red + blue;
	
	int example_color2 = blue;
	//example_color1 = 3;
	example_color2 = 3 + red;

	example_color1 = color(3);
	example_color1 = color(100);

	/*
	设置枚举量的值
	*/
	enum exmaple1 { a = 1, b = 2, c = 3 };
	enum exmaple2 { a, b = 10, c };
	//允许创建多个相同的枚举值
	enum example3{ a, b = 0, c, d = 1 };

	/*
	枚举的取值范围
	首先 要找出上线需要知道枚举值的最大值 找到大于这个最大值的、最小的2的幂 将它减去1 得到的便是取值范围的上限
	例如 最大的枚举值是101 在2的幂中 比这个数大的最小值为128 因此取值范围的上限为127
	要计算下限 需要知道枚举量的最小值 如果他不小于0 则取值范围的下限为0 否则采用与寻找上限相同的方式 但加上负号
	例如 如果最小的枚举量为-6 而比他小的最大的2的幂是-8 因此下限为-7
	*/

	return 0;
}