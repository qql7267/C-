#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	/*
	数组的代替品
	模板类vector和array是数组的替代品
	*/

	/*
	模板类vector
	模板类类似于string类 也是一种动态数组
	可以在运行阶段设置vector对象的长度 可以在末尾附加新数据 可以在中间插入新数据
	实际上vector类使用new和delete来管理内存 这种工作是自动完成的
	示例：
	*/
	//#include <vector>
	vector <int> a1;
	int a1_n;
	cin >> a1_n;
	vector <double> a2(a1_n);
	/*
	其中 a1是一个vector<int>对象 a2是一个vector<double>对象
	创建一个名为vt的vector对象 可以存储n_elem个类型为typeName的元素
	vector<typeName> vt(n_elem)
	其中n_elem可以使整型常量也可以是整型变量
	*/

	/*
	模板类array
	vector的功能比数组大但是效率稍低 如果是长度固定的数组使用数组是更好的选择但不那么方便和安全
	因此新增了模板类array 位于名称空间std中
	array对象的长度是固定的 也使用栈(静态内存分配)而不是自由存储区 因此效率与数组相同 但更方便更安全
	*/
	//#include <array>
	array<int, 5> s1;
	array<double, 4> s2 = { 1.1, 1.2, 1.3, 1.4 };
	/*
	创建一个名为arr的array对象 可以包含n_elem个类型为typeName的元素
	array<typeName, n_elem> arr;
	其中n_elem不能是变量
	*/

	return 0;
}