#include <iostream>
using namespace std;

int main()
{
	/*
	基于范围的for循环
	C++11新增了一种循环 基于范围的for循环
	这简化了常见的循环任务：对数组(或容器类，如vector和array)的每一个元素执行相同的操作
	*/
	double prices[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	for (double x : prices)
		cout << x << endl;

	for (int x : {6, 7, 8, 9})
		cout << x << endl;

	return 0;
}