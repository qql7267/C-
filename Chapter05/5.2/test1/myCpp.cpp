#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	/*
	whileѭ��
	whileѭ����û�г�ʼ���͸��²��ֵ�forѭ�� ֻ�в���������ѭ����
	while(test-condition)
		body
	*/

	/*
	�ȴ�һ��ʱ�䣺��Я��ʱѭ��
	ͷ�ļ�ctime�ṩ��һ�����ų�����������CLOCKS_PER_SEC �ó�������ÿ�������ϵͳʱ�䵥λ��
	*/
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting" << endl;
	clock_t start = clock();
	while (clock() - start < delay)
	{
		cout << "clock() = " << clock() << " start = " << start << "clock() - start = " << clock() - start << " delay = " << delay << endl;
	}
	cout << "done" << endl;

	return 0;
}