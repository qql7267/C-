#include<iostream>
using namespace std;

/*
运算优先级
先括号 再由高到低 最后由左到右
*/

int main()
{
	/*
	除法运算符(/)的行为取决于操作数的类型
	如果两个操作数都是整数 则执行整数除法 这也意味着小数部分将被丢弃 结果是一个整数
	如果其中一个或两个操作数是浮点值 则小数部分将保留 结果为浮点数
	*/
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Mixed division 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants 1e7/9.0 = " << 1e7 / 9.0 << endl;
	cout << "float constants 1e7f/9.0f = " << 1e7f / 9.0f << endl;
	//浮点常量在默认情况下为double类型

	/*
	求模运算符返回整数除法的余数
	与整数除法结合 尤其适用于解决要求将一个量分成不同的整数单元的问题
	*/
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << " pounds are " << stone << " stone, " << pounds << "pound(s)." << endl;

	return 0;
}