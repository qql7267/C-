#include <iostream>
using namespace std;

int main()
{
	/*
	��������һ�����ݸ�ʽ �ܹ��洢��ͬ���������� ��ֻ��ͬ�´�������һ������
	Ҳ����˵ �ṹ����ͬʱ�洢int��long��double ��������ֻ�ܴ洢int��long��double
	*/
	union a1
	{
		int b1;
		double b2;
	};
	//a1 example1 = { 3, 3.3 };
	a1 example2;
	example2.b1 = 4;
	cout << "example2 is b1 = " << example2.b1 << " and b2 = " << example2.b2 << endl;
	example2.b2 = 4.4;
	cout << "example2 is b1 = " << example2.b1 << " and b2 = " << example2.b2 << endl;
	//���������;֮һ�� ��������ʹ�����ֻ�����ָ�ʽ(������ͬʱʹ��)ʱ �ɽ�ʡ�ռ�

	//����������û������ ���Ա����Ϊλ����ͬ��ַ���ı��� ��Ȼÿ��ֻ��һ����Ա�ǵ�ǰ�ĳ�Ա
	struct a2
	{
		string c1;
		int type;
		union
		{
			double d1;
			int d2;
		};
	};

	a2 example_a2;
	if (example_a2.type == 1)
		cin >> example_a2.d1;
	else
		cin >> example_a2.d2;

	return 0;
}