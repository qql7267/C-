#include <iostream>
/*
��������ж���������һ������using����ָ��
������Ϊÿ��������ʹ����cout �����Ҫ�ܹ�����λ�����ƿռ�std�е�cout����
���Բ�����һ�ַ����ö���������ܹ��������ƿռ�std ��������ָ����ں��������� ��λ������������ǰ��
*/
/*
��֮ �ó����ܹ��������ƿռ�ķ����ж��� ��������������
1��using namespace std; ���ں�������֮ǰ ���ļ������еĺ�������ʹ�����ƿռ�std�����е�Ԫ��
2��using namespace std; �����ض��ĺ��������� �øú����ܹ�ʹ�����ƿռ�std�е�����Ԫ��
3���ض��ĺ�����ʹ������using std::cout; �����ı���ָ�� ������using namespace std; �øú����ܹ�ʹ��ָ����Ԫ�� ��cout
4��ȫ�����ñ���ָ�� ����ʹ�����ƿռ�std�е�Ԫ��ʱ ʹ��ǰ׺std:: �� std::cout << "I'm using cout and endl from the std namespace" << std::endl;
*/
using namespace std;

int stonetolb(int);

/*
��һ��̽�� ��дһ��ʹ�÷������ĺ���
main()�����Ѿ���ʾ���з���ֵ�ĺ����ĸ�ʽ ���ں���ͷ��ָ���������� �ں������β��ʹ��return
*/
int main()
{
	//using namespace std;

	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

/*
��main()�� ����ʹ��cin�������ͱ���stone�ṩ��һ��ֵ ���ֵ����Ϊ�������ݸ�stonetolb()����
�ڸú����� ���ֵ����������sts Ȼ��stonetolb()�ùؼ���return��14*sts���ظ�main()
�����return���沢��һ���ø�һ���򵥵�����
*/
/*
����stonetolb()��С���� ���ǰ�����ȫ���ĺ�������
1�к���ͷ�ͺ�����
2����һ������
3����һ��ֵ
4��Ҫһ��ԭ��
*/
int stonetolb(int sts)
{
	return 14 * sts;
}
/*
���溯����ͨ��ʹ�ý�Ϊ���ӵı��ʽ �����˴���һ���±��� ����������ñ��� Ȼ��������
������ر��ʽ��ֵ���鷳 ���Բ��ø����ӵķ�ʽ
*/
int stonetolb1(int sts)
{
	int pounds = 14 * sts;
	return pounds;
}
/*
�������汾���صĽ����ͬ ���ڶ��ڸ����������޸� ��Ϊ��������ͷ��طֿ���
ͨ���ڿ���ʹ��һ���򵥳����ĵط�������ʹ��һ������ֵ������ó�����ͬ�ĺ���
�� stonetolb()����һ��intֵ �����ʹ������ķ�ʽʹ�øú���
*/
int test()
{
	//using namespace std;

	int aunt = stonetolb(20);
	int aunts = aunt + stonetolb(10);
	cout << "Ferdie weighs " << stonetolb(16) << " pounds." << endl;

	return 0;
}
/*
�������κ�һ������� ���򽫼��㷵��ֵ Ȼ���������ʹ�����ֵ
��Щ���ӱ��� ����ԭ�������˺����ӿ� ����������������������ֽ���
�����б�ָ���˺�����Ϣ�������ݸ����� ��������֧���˷���ֵ������
*/