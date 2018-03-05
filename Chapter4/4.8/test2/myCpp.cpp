#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	指针小结
	要声明指向特定类型的指针
	typeName * pointerName
	应将内存地址赋给指针 可以对变量名应用&运算符来获得被命名的内存的地址 new运算符返回未命名的内存的地址
	double * a1;
	double a1_1 = 3.0;
	a1 = &a1_1;
	double * a2 = new double;
	对指针解除引用意味着获得指针指向的值 对指针应用解除引用或间接值运算符(*)来解除引用
	cout << *a1;
	*a2 = 3.1;
	如果a3是指向int的指针 则*a3不是指向int的指针 而是完全等同于一个int类型的变量 a3才是指针
	int * a3 = new int;
	*a3 = 4;
	在多数情况下 C++将数组名视为数组的第一个元素的地址
	int a4[10];
	C++允许将指针和整数相加 结果等于原来的地址值加上原来的指向的对象占用的粽子节数 也可以减去 同理
	a4 = a4 + 1;
	a4 = a4 - 1;
	静态联编 即数组的长度在编译时设置
	int a4[10];
	动态联编(动态数组) 即将在运行时为数组分配空间
	int size;
	cin >> size;
	int * a5 = new int[size];
	delete [] a5;
	使用方括号数组表示法等同于指针解除引用
	int * a6 = new int [10];
	*a6 = 5;
	a6[0] = 6;
	a6[9] = 7;
	int a6_1[10];
	*(a6_1 + 2) = 8;
	*/

	/*
	指针和字符串
	*/
	char a1[20] = "qwe";
	const char * a2 = "asd";
	char * a3;

	cout << a1 << ", " << a2 << endl;
	cout << "Enter a string: ";
	cin.getline(a1, 20);

	a3 = a1;
	cout << a3 << "!!!" << endl;
	cout << a1 << " at " << (int*)a1 << endl;
	cout << a3 << " at " << (int*)a3 << endl;

	a3 = new char[strlen(a1) + 1];
	//这个方法只复制内容 只复制地址上的内容 但是不复制地址
	//strcpy(a3, a2);
	//需要加入缓冲区
	strcpy_s(a3, 20, a2);
	cout << a1 << " at " << (int*)a1 << endl;
	cout << a3 << " at " << (int*)a3 << endl;
	//delete [] a3;

	/*
	使用new创建动态结构
	两种访问结构成员的指针表示法
	*/
	struct bb
	{
		char c1[20];
		float c2;
		double c3;
	};

	bb * b1 = new bb;
	cout << "Enter c1(char): ";
	cin.get(b1->c1, 20);
	cout << "Enter c2(float):";
	cin >> b1->c2;
	cout << "Enter c3(double):";
	cin >> b1->c3;
	cout << "c1 = " << (*b1).c1 << endl;
	cout << "c2 = " << b1->c2 << endl;
	cout << "c3 = " << b1->c3 << endl;
	//delete b1;

	/*
	自动存储、静态存储和动态存储
	C++的三种管理数据内存的方式 在存在时间长短方面 以这三种方式分配的数据对象各不相同
	1.自动存储
	在函数内部定义的常规变量使用自动存储空间 在所属的函数被调用时自动产生 在该函数结束时消亡
	2.静态存储
	整个程序直径期间都存在的存储方式
	一种是在函数外面定义 另一种是声明变量时使用关键字static
	3.动态存储
	new和delete运算符提供的一种比自动变量和静态变量更灵活的方法
	new和delete能在一个函数中分配内存 而在另一个函数中释放他 因此数据的声明周期不完全受程序或函数的生存时间控制
	*/

	return 0;
}