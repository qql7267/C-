#include <iostream>

int main()
{
	using namespace std;

	/*
	����ʱ cin�����������M(ch)ת��Ϊ77
	���ʱ cout��ֵ77ת��Ϊ����ʾ���ַ�M
	cin��cout����Ϊ���ǽ���������������
	*/
	char ch1;
	cout << "Enter a character: " << endl;
	cin >> ch1; //����M
	cout << "Hola! ";
	cout << "Thank you for the " << ch1 << " character." << endl;

	/*
	'M'��ʾ�ַ�M����ֵ���� ��˽�char������ʼ��Ϊ'M' ����ch����Ϊ77
	Ȼ�����ͬ����ֵ����int����i ����ch��i��ֵ����77
	������ cout��ch��ʾΪM ����i��ʾΪ77
	��ǰ���� ֵ�����ͽ�����coutѡ�������ʾֵ
	*/
	/*
	����chʵ������һ������ ��Ϊ���Զ���ʹ���������� ���1 
	�⽫��ch��ֵ��Ϊ78 
	Ȼ�����i��������Ϊ�µ��� cout�ٴν����ֵ��char�汾��ʾΪ�ַ� ��int�汾��ʾΪ����
	*/
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);

	/*
	cout.put()��Ա������һ����Ҫ��C++ OOP����(��Ա����)��һ������
	�ඨ������α�ʾ�Ϳ������� ��Ա������������ �����˲��������ݵķ���
	������ostream��һ��put()�ĳ�Ա���� ��������ַ�
	ֻ��ͨ������ض�����(���������cout����)��ʹ�ó�Ա���� �����þ�㽫�������ͺ��������������� ��㱻��Ϊ��Ա�����
	cout.put()����˼�� ͨ�������cout��ʹ�ú���put()
	*/
	cout.put('!');

	/*
	��Щ�ַ�����ֱ��ͨ���������뵽������
	���� ���س�������ʹ�ַ�������һ�����з� �෴����༭���������ּ�������Ϊ��Դ�����п�ʼ�µ�һ��
	����һЩ�ַ�Ҳ�޷��Ӽ������� ��ΪC++���Ը�������������ĺ���
	���� ˫�����ַ������ָ��ַ�������ֵ ��˲��ܰ�˫���ŷ����ַ�������ֵ��
	��� C++�ṩ��һ������ı�ʾ���� ת������
	*/
	/*
	�ַ�����	   ASCII����	   C++����    ʮ����ASCII��	 ʮ������ASCII��
	���з�	   NL(LF)	   \n		 10				 0xA
	ˮƽ�Ʊ��   HT		   \t		 9				 0x9
	��ֱ�Ʊ��   VT		   \v		 11				 0xB
	�˸�		   BS		   \b		 8				 0x8
	�س�		   CR		   \r		 13				 0xD
	����		   BEL		   \a		 7				 0x7
	��б��	   \		   \\		 92				 0x5C
	�ʺ�		   ?		   \?		 63				 0x3F
	������	   '		   \'		 39				 0x27
	˫����	   "		   \"		 34				 0x22
	*/
	cout << "\a" << endl;

	/*
	��int��ͬ���� char��Ĭ������¼Ȳ���û�з���Ҳ�����з��� �Ƿ��з�����C++ʵ�־���
	���char��ĳ���ض�����Ϊʮ����Ҫ �������ʽ�Ľ���������Ϊsigned char��unsigned char
	*/
	char fodo;
	unsigned char bar;
	signed char snark;
	/*
	�����char������ֵ���� ��unsigned char��signed char֮��Ĳ��콫�ǳ���Ҫ
	unsigned char���ͱ�ʾ��Χͨ��Ϊ0~255
	signed char���ͱ�ʾ��ΧΪ-128��127
	*/

	/*
	�ڼ����� ����������ֵ����ʹtrue��false
	bool�������������ͼ� �ֱ���Ԥ���������ֵtrue��false
	C++�� ����ֵҲ����Ϊtrue �����Ϊfalse
	*/
	bool is_ready = true;
	//����ֵtrue��false������ͨ������ת��Ϊint���� true��ת��Ϊ1 false��ת��Ϊ0
	int ans = true;
	int promise = false;
	//���� �κ�����ֵ������֯�����Ա���ʽת��(��������ʾǿ��ת��)Ϊboolֵ �κη���ֵ����ת��Ϊtrue �㱻ת��Ϊfalse
	bool start = -100;
	bool stop = 0;

	return 0;
}