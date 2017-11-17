#include <iostream>
/*
多个函数中都包含下面一条关于using编译指令
这是因为每个函数都使用了cout 因此需要能够访问位于名称空间std中的cout定义
可以采用另一种方法让多个函数都能够访问名称空间std 即将编译指令放在函数的外面 且位于两个函数的前面
*/
/*
总之 让程序能够访问名称空间的方法有多中 下面是其中四中
1将using namespace std; 放在函数定义之前 让文件中所有的函数都能使用名称空间std中所有的元素
2将using namespace std; 放在特定的函数定义中 让该函数能够使用名称空间std中的所有元素
3在特定的函数中使用类似using std::cout; 这样的编译指令 而不是using namespace std; 让该函数能够使用指定的元素 如cout
4完全不适用编译指令 而在使用名称空间std中的元素时 使用前缀std:: 如 std::cout << "I'm using cout and endl from the std namespace" << std::endl;
*/
using namespace std;

int stonetolb(int);

/*
深一步探究 编写一个使用返回语句的函数
main()函数已经揭示了有返回值的函数的格式 即在函数头中指出返回类型 在函数体结尾处使用return
*/
int main()
{
	//using namespace std;

	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

/*
在main()中 程序使用cin来给整型变量stone提供了一个值 这个值被作为参数传递给stonetolb()函数
在该函数中 这个值被赋给变量sts 然后stonetolb()用关键字return将14*sts返回给main()
这表明return后面并得一定得跟一个简单的数字
*/
/*
函数stonetolb()短小、简单 但是包含了全部的函数特性
1有函数头和函数体
2接受一个参数
3返回一个值
4需要一个原型
*/
int stonetolb(int sts)
{
	return 14 * sts;
}
/*
上面函数中通过使用较为复杂的表达式 避免了创建一个新变量 将结果赋给该变量 然后将它返回
如果返回表达式的值很麻烦 可以采用更复杂的方式
*/
int stonetolb1(int sts)
{
	int pounds = 14 * sts;
	return pounds;
}
/*
这两个版本返回的结果相同 但第二宗更容易理解和修改 因为他将计算和返回分开了
通常在可以使用一个简单常量的地方都可以使用一个返回值类型与该常量相同的函数
如 stonetolb()返回一个int值 则可以使用下面的方式使用该函数
*/
int test()
{
	//using namespace std;

	int aunt = stonetolb(20);
	int aunts = aunt + stonetolb(10);
	cout << "Ferdie weighs " << stonetolb(16) << " pounds." << endl;

	return 0;
}
/*
在上述任何一种情况下 程序将计算返回值 然后在语句中使用这个值
这些例子表明 函数原型描述了函数接口 即函数如何与程序的其他部分交互
参数列表指出了何种信息将被传递给函数 函数类型支持了返回值的类型
*/