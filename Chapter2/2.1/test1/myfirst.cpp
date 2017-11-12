//预处理器编译指令 include
#include <iostream>

//函数头
int main()
//函数体 用{}括起
{
	//编译指令using namespace
	using namespace std;
	cout << "Come up and C++ me some time,";
	cout << endl;
	cout << "You won't regret it!" << endl;
	//如果不想在程序运行完毕后自动关闭窗口 在return之前添加下行语句
	cin.get();
	//结束main()函数的return语句
	return 0;
}