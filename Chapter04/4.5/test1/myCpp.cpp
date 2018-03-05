#include <iostream>
using namespace std;

int main()
{
	/*
	共用体是一种数据格式 能够存储不同的数据类型 但只能同事村塾其中一种类型
	也就是说 结构可以同时存储int、long和double 但共用体只能存储int、long或double
	*/
	union a1
	{
		int b1;
		double b2;
	};
	//a1 example1 = { 3, 3.3 };
	a1 example2;
	example2.b1 = 4;
	cout << "example2 is b1 = " << example2.b1 << " and b2 = " << example2.b2 << endl;
	example2.b2 = 4.4;
	cout << "example2 is b1 = " << example2.b1 << " and b2 = " << example2.b2 << endl;
	//共用体的用途之一是 当数据项使用两种或更多种格式(但不会同时使用)时 可节省空间

	//匿名共用体没有名称 其成员将成为位于相同地址处的变量 显然每次只有一个成员是当前的成员
	struct a2
	{
		string c1;
		int type;
		union
		{
			double d1;
			int d2;
		};
	};

	a2 example_a2;
	if (example_a2.type == 1)
		cin >> example_a2.d1;
	else
		cin >> example_a2.d2;

	return 0;
}