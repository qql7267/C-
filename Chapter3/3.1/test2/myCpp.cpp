#include <iostream>
/*
ͷ�ļ�climits�����˷��ų������������͵���ʾ
���ų���				��ʾ
CHAR_BIT			char��λ��
CHAR_MAX			char�����ֵ
CHAR_MIN			char����Сֵ
SCHAR_MAX			signed char�����ֵ
SCHAR_MIN			signed char����Сֵ
UCHAR_MAX			unsigned char�����ֵ
SHRT_MAX			short�����ֵ
SHRT_MIN			short����Сֵ
USHRT_MAX			unsigned short�����ֵ
INT_MAX				int�����ֵ
INT_MIN				int����Сֵ
UINT_MAX			unsigned int�����ֵ
LONG_MAX			long�����ֵ
LONG_MIN			long����Сֵ
ULONG_MAX			unsigned long�����ֵ
LLONG_MAX			long long�����ֵ
LLONG_MIN			long long����Сֵ
ULLONG_MAX			unsigned long long�����ֵ
*/
#include <climits>

int main()
{
	using namespace std;

	/* ����
	���;���û��С�����ֵ�����
	�����кܶ� ��������޴�����������ܴ� �򲻿��������޵ļ�����ڴ����������е����� �������ֻ�ܱ�������������һ���Լ�
	��Щ����ֻ�ṩһ������(һ��������������Ҫ��) ��C++���ṩ�ü��� �����ܹ����ݳ���ľ���Ҫ��ѡ�����ʺϵ�����
	��ͬC++����ʹ�ò�ͬ���ڴ������洢���� ʹ�õ��ڴ���Խ�� ���Ա���������ֵ��ΧҲԽ�� �����е�����(��������)�ɱ�ʾ��ֵ�͸�ֵ ���е�����(�޷�������)���ܱ�ʾ����
	���ڿ��(width)���������洢����ʱʹ�õ��ڴ��� ʹ�õ��ڴ�Խ����Խ��
	C++�Ļ�������(����ȵ�����˳������)�ֱ���char��short��int��long��C++11������long long ����ÿ�����Ͷ����з��Ű汾���޷��Ű汾
	����ܹ���10�����Ϳɹ�ѡ�� char������Щ��������(����ڱ�ʾ�ַ�����������)
	*/
	/* ����short��int��long��long long
	������ڴ���һЩ����λ(bit)�ĵ�Ԫ���
	C++��short��int��long��long long����ͨ��ʹ�ò�ͬ��Ŀ��λ���洢֮ ����ܹ���ʾ4�ֲ�ͬ���������
	��������е�ϵͳ�� ÿ�����͵Ŀ�ȶ���ͬ �����������ǳ�����
	����C++�ṩ��һ�����ı�׼ ��ȷ������С����(��C���Խ������)
	1short����16λ
	2int������shortһ����
	3long����32λ ��������intһ����
	4long long����64λ ��������longһ����
	*/
	/*
	ʵ���� short��short int�ļ�� ��long��long int�ļ��
	*/
	short score;
	int temperature;
	long position;

	/* ��ʼ��
	��ʼ���������������ϲ���һ��
	��������� �����˱���n_int ����int�����ֵ������
	*/
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	/*
	Ҳ����ʹ������ֵ��������ʼ�� ���Խ�������ʼ��Ϊ��һ������ �����Ǻ����Ѿ������
	��������ʹ�ñ��ʽ����ʼ������ �����ǵ�����ִ�е��������� ���ʽ�����е�ֵ������֪��
	*/
	int uncles = 5;
	int aunts = uncles;
	int chairs = aunts + uncles + 4;
	/*
	ǰ��ĳ�ʼ���﷨����C���� C++������һ��C����û�еĳ�ʼ���﷨
	*/
	int owls = 101;
	int wrens(432);
	/*
	���֪�������ĳ�ʼֵӦ����ʲô ��Ӧ�������г�ʼ�� �����������͸�ֵ�ֿ� ����ܻ����˲������δ��������
	Ȼ�� �����������Ƕ������г�ʼ�� �ɱ����Ժ����Ǹ�����ֵ���������
	*/
	short year;
	year = 1492;
	/*
	������һ�ֳ�ʼ����ʽ ���ַ�ʽ��������ͽṹ ����C++98�� Ҳ�����ڵ�ֵ����
	*/
	int hamburgers = { 24 };
	/*
	�������ų�ʼ�������ڵ�ֵ���������λ����� ��C++11��׼ʹ���������θ�����
	���� �������ַ�ʽʱ ����ʹ�õȺ�(=) Ҳ���Բ�ʹ��
	*/
	int emus{ 7 };
	int rheas = { 12 };
	/*
	��� �������ڿ��Բ������κζ���
	��������� ����������ʼ��Ϊ��
	*/
	int rocs = {};
	int psychics{};

	/*
	sizeof�����ָ�� ��ʹ��8λ�ֽڵ�ϵͳ�� int�ĳ���Ϊ4���ֽ�
	�ɶ��������������ʹ��sizeof����� ��������(��int)ʹ��sizeof������� Ӧ�����Ʒ��������� ���Ա�����(��n_short)ʹ�ø������ �����ǿ�ѡ��
	*/
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;

	return 0;
}