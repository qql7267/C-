#include<iostream>
using namespace std;

/*
�������ȼ�
������ ���ɸߵ��� ���������
*/

int main()
{
	/*
	���������(/)����Ϊȡ���ڲ�����������
	��������������������� ��ִ���������� ��Ҳ��ζ��С�����ֽ������� �����һ������
	�������һ���������������Ǹ���ֵ ��С�����ֽ����� ���Ϊ������
	*/
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Mixed division 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants 1e7/9.0 = " << 1e7 / 9.0 << endl;
	cout << "float constants 1e7f/9.0f = " << 1e7f / 9.0f << endl;
	//���㳣����Ĭ�������Ϊdouble����

	/*
	��ģ�����������������������
	������������� ���������ڽ��Ҫ��һ�����ֳɲ�ͬ��������Ԫ������
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