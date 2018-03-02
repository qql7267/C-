#include <iostream>
using namespace std;

int main()
{
	/*
	数组(array)是一种数据格式 能够存储多个同类型的值 每个值都存储在一个独立的数组元素中 计算机在内存中依次存储数组的各个元素
	要创建数组 可使用声明语句
	数组声明应指出以下三点
	1.存储在每个元素中的值的类型
	2.数组名
	3.数组中的元素数
	通用格式 typeName arrayName[arraySize];
	可以单独访问数组元素 方法是使用下标或索引来对元素进行编号
	C++数组从0开始编号
	*/

	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20, 30, 5 };

	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << "yams costs " << yamcosts[1] << " cents per yam." << endl;

	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents." << endl;

	cout << "Size of yams array = " << sizeof yams << " bytes." << endl;
	cout << "Size of one element = " << sizeof yams[0] << " bytes." << endl;

	/*
	数组的初始化规则
	*/
	int a1[4] = { 3, 6, 8, 10 };
	int a2[4];
	//a1[4] = { 5, 6, 7, 8 };
	//a2 = a1;

	//初始化数组是 提供的值可以少于数组的元素数目
	float a3[5] = { 5.0, 2.5 };
	//如果只对数组的一部分进行初始化 则编译器将把其他元素设置为0
	long a4[500] = { 0 };
	//如果初始化为{1} 则第一个元素被设置为1 其他元素都被设置为0
	//如果初始化数组时方括号内为空 C++编译器讲计算元素个数
	short a5[] = { 1, 2, 3, 4 };

	/*
	C++11数组初始化方法
	*/
	//初始化数组时 可以省略等号
	double b1[4] {1, 1.2e2, 3.3e-3};
	//可以不载大括号内包含任何东西 这将把所有元素设置为0
	unsigned int b2[10] = {};
	//列表初始化进制缩窄转换
	long b3[] = { 25, 92, 3.0 };
	char b4[4] = { 'a', 's', 123, '\0' };
	char b5[4] = { 'a', 's', 1234567, '\0' };

	return 0;
}