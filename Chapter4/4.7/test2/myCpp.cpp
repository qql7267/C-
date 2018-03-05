#include <iostream>
using namespace std;

int main()
{
	/*
	使用new来分配内存
	指针真正的用武之地在于 在运行阶段分配未命名的内存以存储值 这时只能通过指针来访问内存
	在C语言中 可以使用库函数malloc()来分配内存 在C++中也可以这么做 但C++还有更好的方法————new运算符
	为一个数据对象(可以是结构也可以是基本类型)获得并制定分配内存的通用格式如下
	typeName * pointer_name = new typeName;
	*/

	int a1 = 10;
	int *a2 = new int;
	*a2 = 11;
	double *a3 = new double;
	*a3 = 12.00001;

	cout << "a1 = " << a1 << ", location = " << &a1 << endl;
	cout << "a2 = " << *a2 << ", location = " << a2 << endl;
	cout << "a3 = " << *a3 << ", location = " << a3 << endl;
	cout << "location of pointer a3 = " << &a3 << endl;

	//a2和a3是地址 是int型 所以size是4
	cout << "size of a2 = " << sizeof(a2) << ", size of *a2 = " << sizeof(*a2) << endl;
	cout << "size of a3 = " << sizeof(a3) << ", size of *a3 = " << sizeof(*a3) << endl;

	/*
	使用delete释放内存
	使用完内存后 能够将其归还给内存池
	这是通向最有效的使用内存的关键一步 归还或释放(free)的内存可供程序的其他部分使用
	使用delete时 后面要加上指向内存块的指针
	*/
	int * b1 = new int;
	delete b1;
	/*
	这将释放c1指向的内存 但不会删除c1本身
	例如可以将c1重新指向另一个新分配的内存块 一点定要配对的使用new和delete 否则将发生内存泄漏
	也就是说 被分配的内存再也无法使用了
	如果内存泄漏严重 则程序将由于寻找更多内存而终止
	不要尝试释放以释放的内存块 C++标准指出 这样做的结果将是不确定的 这意味着什么都可能发生 另外 不能使用delete来释放声明变量所获得的内存
	*/
	int *b2 = new int;
	delete b2;
	//delete b2;
	int b3 = 3;
	int *b4 = &b3;
	//delete b3;

	//一般来说 不要创建两个指向同一个内存块的指针 因为这将增加错误的删除同一个内存块两次的可能性
	int *b5 = new int;
	int *b6 = b5;
	delete b6;

	/*
	使用new来创建动态数组
	typeName * pointer_name = new typeName [num_elements]
	使用new和delete时 应遵守以下规则
	1.不要使用delete来释放不是new分配的内存
	2.不要使用delete释放同一个内存块两次
	3.如果使用new[]为数组分配内存 则应使用delete[]来释放
	4.如果使用new[]为一个实体分配内存 则应使用delete(没有方括号)来释放
	5.对空指针应用delete是安全的
	*/

	double * c1 = new double[3];
	c1[0] = 0.2;
	c1[1] = 0.3;
	c1[2] = 0.4;
	cout << "c1[1] = " << c1[1] << endl;
	c1 = c1 + 1;
	cout << "c1[0] = " << c1[0] << endl;
	cout << "c1[1] = " << c1[1] << endl;
	cout << "c1[2] = " << c1[2] << endl;
	c1 = c1 - 1;
	delete [] c1;
	/*
	不能修改数组名的值 但指针是变量 因此可以修改它的值
	c1加1后 表达式c1[0]现在指的是数组的第2个值 因此c1加上1导致他指向第二个元素而不是第1个
	将他减1后 指针将指向原来的值 这样程序就可以给delete[]提供正确的地址
	*/

	return 0;
}

