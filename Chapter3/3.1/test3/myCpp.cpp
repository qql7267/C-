#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	/*
	ǰ����ܵ�4�����Ͷ���һ�ֲ��ܴ洢����ֵ���޷��ű��� ���ŵ��ǿ�����������ܹ��洢�����ֵ
	��short��ʾ�ķ�Χ��-32768��+32767 ���޷��Ű汾�ı��巶ΧΪ0��65535
	�޷�������ֻ��Ҫʹ�ùؼ���unsigned���޸���������
	*/
	unsigned short change;
	unsigned int rovert;
	//ע�� unsigned������unsigned int����д
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
	//����
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has" << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	//����
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	//�����Խ�˼��� ��ֵ��Ϊ��Χ��һ�˵�ȡֵ

	return 0;
}