#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	/*
	while循环
	while循环是没有初始化和更新部分的for循环 只有测试条件和循环体
	while(test-condition)
		body
	*/

	/*
	等待一段时间：便携延时循环
	头文件ctime提供了一个符号常量————CLOCKS_PER_SEC 该敞亮等于每秒包含的系统时间单位数
	*/
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting" << endl;
	clock_t start = clock();
	while (clock() - start < delay)
	{
		cout << "clock() = " << clock() << " start = " << start << "clock() - start = " << clock() - start << " delay = " << delay << endl;
	}
	cout << "done" << endl;

	return 0;
}