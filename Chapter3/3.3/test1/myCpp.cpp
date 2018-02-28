#include <iostream>
using namespace std;

/*
������
ʹ�ø������Ϳ��Ա�ʾ����2.5/3.14159��12345.67����������
�������������ֵ�ֳ������ִ洢 һ���ֱ�ʾֵ ��һ�������ڶ�ֵ���зŴ����С
��12.3456��1234.56 ���ǳ���С�����λ�ò�ͬ�� ����������ͬ��
���԰ɵ�һ������ʾ��0.123456(��׼ֵ)��100(��������) �ڶ�������ʾ��0.123456(��׼ֵ)��10000(��������)
�������ӵ��������ƶ�С�����λ�� ���︡����˶�����
C++�ڲ���ʾ�������ķ���Ԥ����ͬ ֻ�������ǻ��ڶ������� �������������2���ݶ�����10����
�����ڲ������� ����Ҫ�����˽�
�������ܱ�ʾС��ֵ���ǳ���ͷǳ�С��ֵ ���ǵ��ڲ���ʾ����������������֮��
*/

int main()
{
	/*
	C++��������д�������ķ�ʽ 
	��һ����ʹ�ó��õı�׼С�����ʾ��
	*/
	float a1 = 12.34;		//floating-point
	float a2 = 999001.32;	//floating-point
	float a3 = 0.00023;		//floating-point
	float a4 = 8.0;			//still floating-point
	//��ʹС������Ϊ0 С����Ҳ��ȷ���������Ը����ʽ(������������ʽ)��ʾ

	/*
	�ڶ��ֱ�ʾ����ֵ�ķ�������E��ʾ�� 
	������������� 3.45E6 ��ָ����3.45��1000000��˵Ľ�� E5ָ����10��6�η� ��1����6��0
	��� 3.45E6��ʾ����3450000 6����Ϊֻ�� 345����Ϊβ��
	������һЩ����
	*/
	float b1 = 2.52e+8;		//����ʹ��E����e +�ɼӻ򲻼�
	float b2 = 8.33E-4;		//ָ�������Ǹ���
	float b3 = 7E5;			//��7.0E+05һ��
	float b4 = -18.32e13;	//������ǰ���+��-����
	float b5 = 1.69e12;		//2010�����Ƕ�Ƿ�����Ĺ�ծ(�����������˼)
	float b6 = 5.98E24;		//���������
	float b7 = 9.11e-31;	//һ�����ӵ�����
	/*
	E��ʾ�����ʺϷǳ���ͷǳ�С����
	E��ʾ��ȷ�������Ը����ʽ�洢 ��ʹû��С���� ע�� ����ʹ��E��e ָ������������Ҳ�����Ǹ��� ���������в����пո�
	��ס d.ddE+nָ���ǽ�С����������nλ ��d.dddE~nָ���ǽ�С����������nλ ֮���Գ�Ϊ�����㡱 ������ΪС��������ƶ�
	*/
	
	/*
	��ANSI Cһ�� C++ҳ��3�ָ������� float double�� long double
	��Щ�����ǰ����ǿ��Ա�ʾ����Ч��λ�������ָ����С��Χ��������
	��Чλ(significant figure)���������������λ
	����14179 ʹ����5����Чλ 14000��Чλ��2�� ������λֻ������ռλ��
	ʵ���� C��C++������Чλ����Ҫ���� float����32λ double����48λ �Ҳ�����float long double���ٺ�doubleһ����
	���������͵���Чλ������һ���� Ȼ��ͨ�� float��32λ double��64λ long doubleΪ80/96��128λ
	���� ���������͵�ָ����Χ������-37��37
	���Դ�ͷ�ļ�cfloat��float.h���ҵ�ϵͳ����ʾ(cfloat��C���Ե�float.h�ļ���C++�汾)
	������Borland C++ Builder��float.h�ļ��е�һЩ��ע��
	*/
	//the following are the minimum number if significant dights
	#define DBL_DIG 15		//double
	#define FLT_DIG 6		//float
	#define LBBL_DIG 18		//long double

	//the following are the number if bits used to represent the mantissa
	#define DBL_MANT_DIG 53
	#define FLT_MANT_DIG 24
	#define LBBL_MANT_DIG 64

	//the following are the maximum and minimum exponent values
	#define DBL_MAX_10_EXP +308
	#define FLT_MAX_10_EXP +38
	#define LBBL_MAX_10_EXP +4932

	#define DBL_MIN_10_EXP -307
	#define FLT_MIN_10_EXP -37
	#define LBBL_MIN_10_EXP -4931

	/*
	float��double���ͼ����Ǳ�ʾ����ʱ�ھ��ȷ���Ĳ���(����Чλ��)
	���ֵ�����ʹ���ʹ�ö����ʾ�� һ�߸��õ��˽⾫�� �����³���ɽϴ��ֵ�л�ΪE��ʾ�� ��ʹ������ʾ��С�����6λ
	����ios_base::fixed��ios_base::floatfield��ͨ������iostream���ṩ�ĳ���
	*/
	cout.setf(ios_base::fixed, ios_base::floatfield); //fixed-point
	float tub = 10.0 / 3.0;		//good to about 6 places
	double mint = 10.0 / 3.0;	//good to about 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	
	/*
	���㳣��
	�ڳ�������д���㳣����ʱ�� Ĭ������� ��8.24��2.4E8�����ĸ��㳣��������double����
	���ϣ������Ϊfloat���� ʹ��f��F��׺
	����long double���� ��ʹ��l��L��׺
	*/
	auto c1 = 1.234f;		//a float constant
	auto c2 = 2.45E20F;	//a float constant
	auto c3 = 2.34E22;	//a double constant
	auto c4 = 2.2L;	//a long double constant

	/*
	����������ȱ��
	��֤����� �������������ŵ�
	���������ǿ��Ա�ʾ����֮���ֵ ����������������� ���ǿ��Ա�ʾ�ķ�Χ��ö�
	��һ���� ����������ٶ�ͨ�������������� �Ҿ��Ƚ�����
	*/
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	/*
	�ó������ּ���1 Ȼ���ȥԭ�������� ���Ӧ��Ϊ1 ������Ϊ0
	�������� 2.34E+22��һ��С���������23λ������
	����1 �����ڵ�23λ��1
	��float����ֻ�ܱ�ʾ�����е�ǰ6λ��ǰ7λ ����޸ĵ�23λ�����ֵ�������κ�Ӱ��
	*/

	return 0;
}