#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	/*
	前面介绍的4中整型都有一种不能存储负数值的无符号变体 其优点是可以增大变量能够存储的最大值
	如short表示的范围是-32768到+32767 则无符号版本的表叔范围为0到65535
	无符号类型只需要使用关键字unsigned来修改声明即可
	*/
	unsigned short change;
	unsigned int rovert;
	//注意 unsigned本身是unsigned int的缩写
	unsigned quarterback;
	unsigned long gone;
	unsigned long long lang_lang;

	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		<< "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	//上溢
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has" << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	//下溢
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	//如果超越了极限 其值将为范围另一端的取值

	return 0;
}