#include <iostream>
using namespace std;

int main()
{
	/*
	C++��enum�����ṩ����һ�ִ������ų����ķ�ʽ 
	���ַ�ʽ���Դ���const �������������� �����밴�ϸ�����ƽ��� ʹ��enum�ľ䷨��ʹ�ýṹ����
	*/
	enum color { red, blue, green, white, black, pink, yellowm, orange };
	/*
	�����������������
	1.��color��Ϊ�����͵����� color����Ϊö��
	2����red��blue����Ϊ���ų��� ���Ƕ�Ӧ����ֵ0~7 ��Щ��������ö����
	*/

	//һЩö�ٱ����������벻����
	color example_color1;
	example_color1 = blue;
	//example_color1 = 2000;

	example_color1 = orange;
	//example_color1++;
	//example_color1 = red + blue;
	
	int example_color2 = blue;
	//example_color1 = 3;
	example_color2 = 3 + red;

	example_color1 = color(3);
	example_color1 = color(100);

	/*
	����ö������ֵ
	*/
	enum exmaple1 { a = 1, b = 2, c = 3 };
	enum exmaple2 { a, b = 10, c };
	//�����������ͬ��ö��ֵ
	enum example3{ a, b = 0, c, d = 1 };

	/*
	ö�ٵ�ȡֵ��Χ
	���� Ҫ�ҳ�������Ҫ֪��ö��ֵ�����ֵ �ҵ�����������ֵ�ġ���С��2���� ������ȥ1 �õ��ı���ȡֵ��Χ������
	���� ����ö��ֵ��101 ��2������ ������������СֵΪ128 ���ȡֵ��Χ������Ϊ127
	Ҫ�������� ��Ҫ֪��ö��������Сֵ �������С��0 ��ȡֵ��Χ������Ϊ0 ���������Ѱ��������ͬ�ķ�ʽ �����ϸ���
	���� �����С��ö����Ϊ-6 ������С������2������-8 �������Ϊ-7
	*/

	return 0;
}