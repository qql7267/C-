#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	/*
	����Ĵ���Ʒ
	ģ����vector��array����������Ʒ
	*/

	/*
	ģ����vector
	ģ����������string�� Ҳ��һ�ֶ�̬����
	���������н׶�����vector����ĳ��� ������ĩβ���������� �������м����������
	ʵ����vector��ʹ��new��delete�������ڴ� ���ֹ������Զ���ɵ�
	ʾ����
	*/
	//#include <vector>
	vector <int> a1;
	int a1_n;
	cin >> a1_n;
	vector <double> a2(a1_n);
	/*
	���� a1��һ��vector<int>���� a2��һ��vector<double>����
	����һ����Ϊvt��vector���� ���Դ洢n_elem������ΪtypeName��Ԫ��
	vector<typeName> vt(n_elem)
	����n_elem����ʹ���ͳ���Ҳ���������ͱ���
	*/

	/*
	ģ����array
	vector�Ĺ��ܱ��������Ч���Ե� ����ǳ��ȹ̶�������ʹ�������Ǹ��õ�ѡ�񵫲���ô����Ͱ�ȫ
	���������ģ����array λ�����ƿռ�std��
	array����ĳ����ǹ̶��� Ҳʹ��ջ(��̬�ڴ����)���������ɴ洢�� ���Ч����������ͬ �����������ȫ
	*/
	//#include <array>
	array<int, 5> s1;
	array<double, 4> s2 = { 1.1, 1.2, 1.3, 1.4 };
	/*
	����һ����Ϊarr��array���� ���԰���n_elem������ΪtypeName��Ԫ��
	array<typeName, n_elem> arr;
	����n_elem�����Ǳ���
	*/

	return 0;
}