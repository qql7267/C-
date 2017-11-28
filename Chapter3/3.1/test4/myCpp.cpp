#include <iostream>

int main()
{
	using namespace std;
	/*
	整型字面值(常量)是显式的书写的常量
	C++能够以三种不同的计数方式来书写整数 基数为10、基数为8(老式UNIX版本)和基数为16(硬件黑客的最爱)
	这里是C++表示法
	C++使用前一(两)位来表示数字常量的计数
	如果第一位为1~9 则计数为10(十进制)
	如果第一位是0 第二位为1~7 则基数为8(八进制)
	如果前两位为0X或0x 则基数为16(十六进制) 对于十六进制数 字符a~f和A~F表示了十六进制位 对应10~15
	*/
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)" << endl;
	cout << "watst = " << waist << " (0x42 in hex)" << endl;
	cout << "inseam = " << inseam << " (042 in octal)" << endl;
	cout << endl;

	int chest1 = 42;
	int waist1 = 42;
	int inseam1 = 42;
	
	/*
	头文件iostream提供了控制符dec、hex和oct
	分别用于指示cout以十进制 十六进制 八进制格式显示整数
	*/
	/*
	诸如cout<<hex;等代码不会在屏幕桑显示认识内容 而只是修改cout显示整数的方式
	因此 控制符hex实际上是一条消息 告诉cout采取何种行为
	另外 由于标识符hex位于名称空间std中 而程序使用了名称空间 因此不能将hex用作变量名
	然而 如果省略编译指令using而使用std::cout、std::endl、std::hex和std::oct 则可以将hex用作变量名
	*/
	cout << "Monsieur cuts a striking figure!\n";
	cout << dec;
	cout << "chest1 = " << chest1 << " (decimal for 42)" << endl;
	cout << hex;
	cout << "watst1 = " << waist1 << " (hexadecimal for 42)" << endl;
	cout << oct;
	cout << "inseam1 = " << inseam1 << " (octal fot 42)" << endl;

	return 0;
}