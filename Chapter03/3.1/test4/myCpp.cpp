#include <iostream>

int main()
{
	using namespace std;
	/*
	��������ֵ(����)����ʽ����д�ĳ���
	C++�ܹ������ֲ�ͬ�ļ�����ʽ����д���� ����Ϊ10������Ϊ8(��ʽUNIX�汾)�ͻ���Ϊ16(Ӳ���ڿ͵��)
	������C++��ʾ��
	C++ʹ��ǰһ(��)λ����ʾ���ֳ����ļ���
	�����һλΪ1~9 �����Ϊ10(ʮ����)
	�����һλ��0 �ڶ�λΪ1~7 �����Ϊ8(�˽���)
	���ǰ��λΪ0X��0x �����Ϊ16(ʮ������) ����ʮ�������� �ַ�a~f��A~F��ʾ��ʮ������λ ��Ӧ10~15
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
	ͷ�ļ�iostream�ṩ�˿��Ʒ�dec��hex��oct
	�ֱ�����ָʾcout��ʮ���� ʮ������ �˽��Ƹ�ʽ��ʾ����
	*/
	/*
	����cout<<hex;�ȴ��벻������Ļɣ��ʾ��ʶ���� ��ֻ���޸�cout��ʾ�����ķ�ʽ
	��� ���Ʒ�hexʵ������һ����Ϣ ����cout��ȡ������Ϊ
	���� ���ڱ�ʶ��hexλ�����ƿռ�std�� ������ʹ�������ƿռ� ��˲��ܽ�hex����������
	Ȼ�� ���ʡ�Ա���ָ��using��ʹ��std::cout��std::endl��std::hex��std::oct ����Խ�hex����������
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