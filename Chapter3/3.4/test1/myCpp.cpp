#include<iostream>
using namespace std;

/*
������5�ֻ�����C++���������
	+������Բ�����ִ�мٷ�����
	-������ӵ�һ�����м�ȥ�ڶ�����
	*����������������
	/������õ�һ�������Եڶ�����
	%�������ģ ���ǵ�һ�������Եڶ������������
*/

int main()
{
	//����float C++ֻ��֤6λ��Чλ �����Ҫ���ߵľ��� ��ʹ��double��long double
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	return 0;
}