#include <iostream>

int main()
{
	using namespace std;

	/*
	��������ṩ��������Ϣ ��Ҫ���ڴ��Լ����ڴ浥Ԫ������
	�������˵ �������֧��������Ҫ�㹻�Ĵ洢�ռ����洢һ������ �������������ͱ���ڴ��ϸ��
	��ɵĵڶ��������Ǹ��洢��Ԫ�ƶ����� 
	�������ָ�� ����ʹ������carrots����ʶ�洢�ڸ��ڴ浥Ԫ�е�ֵ
	���ʡ���˸����� ��������ͼʹ��carrotsʱ ��������ָ������
	�������ͨ��ָ����Ҫ�洢���������ͺͳ���Դ洢�����������ʹ�õ�����
	*/
	/*
	�����е�������������������(defining declaration)��� ���Ϊ����(definition)
	����ζ���������±�����Ϊ���������ڴ�ռ�
	�ڽ�Ϊ���ӵ������ ����������������(reference declaration)
	��Щ������������ʹ���������ط�����ı���
	ͨ�� ������һ���Ƕ��� ������������� �����Ƕ���
	*/
	int carrots;

	/*
	��ֵ��佫ֵ�����洢��Ԫ
	*/
	/*
	����=������ֵ����� C++(��C)������Ѱ�������� ��������ʹ�ø�ֵ�����
	�� ���д����ǺϷ���
	*/
	int a;
	int b;
	int c;
	c = b = a = 1; //���ƽ������������ ����1������a Ȼ��a(1)��ֵ������b Ȼ��b(1)��ֵ������c
	carrots = 25;
	cout << "I have ";
	/*
	����û�д�ӡ��carrots����ʮ��ӡ�洢��carrots�е�����ֵ
	ʵ���� �������������϶�Ϊһ�� ���� cout��carrots�滻Ϊ�䵱ǰֵ25 Ȼ���ֵת��Ϊ���ʵ�����ַ�
	[��������ǵ����洢ÿ������ ���ǽ�25�洢Ϊ�������� Ҫ���� �ڴ�ӡ֮ǰ cout���뽫�������ǵ�����ת��Ϊ�ַ�����ʽ]
	*/
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	/*
	��ֵ������ұߵı���ʽcarrots-1��һ����ʽ����ʽ �����������carrots��ֵ25��ȥ1 �õ�24
	Ȼ��ֵ������������ֵ�洢������carrots��Ӧ���ڴ浥Ԫ��
	*/
	carrots = carrots - 1;
	/*
	����ʽC���Ե���������cout�Ĵ����̶� 
	��C������ Ҫ��ӡ�ַ�����25��������25 ����ʹ��C���ԵĶ๦���������printf() 
	*/
	printf("Printing a string: %s\n", "25");
	printf("Printing an integer: %d\n", 25);
	/*
	Ʋ��printf()�ĸ����Բ�˵ �������������(%s��%d)��ָ����Ҫ��ӡ�ַ�����������
	�����printf()��ӡ�ַ������ִ�����ṩ��һ������ ����printf()��������
	��˸������ֲ��˴��� ������������ ��ʾһ�Ѵ���
	cout��������ΪԺ��C++������������� 
	ʵ���� C++���������(<<)�����������������������涨��������Ϊ
	[���� printf()��coutҪ��]
	*/
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

	return 0;
}