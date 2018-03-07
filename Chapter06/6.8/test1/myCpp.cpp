#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	/*
	���ļ�����/���
	*/

	/*
	д�뵽�ı��ļ���
	*/
	//#include <fstream>
	char a1[50];
	int a2;
	double a3;
	double a4;

	ofstream outFile;
	//�洢��Ŀ¼�µ�"test_out.txt"�ļ���
	outFile.open("test_out.txt");

	cout << "First enter a1: ";
	cin.getline(a1, 50);
	cout << "Second enter a2: ";
	cin >> a2;
	cout << "Third enter a3: ";
	cin >> a3;
	a4 = 1.23 * a3;

	//��������������ǿ�ѧ������
	cout << fixed;
	//������λС��
	cout.precision(2);
	//��ʾ������С��������0
	cout.setf(ios_base::showpoint);
	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;
	cout << "a3 = " << a3 << endl;
	cout << "a4 = " << a4 << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "a1 = " << a1 << endl;
	outFile << "a2 = " << a2 << endl;
	outFile << "a3 = " << a3 << endl;
	outFile << "a4 = " << a4 << endl;

	//����ָ� �Ե��س�
	cin.get();
	
	/*
	��ȡ�ı��ļ�
	*/
	//#include <fstream>
	//#include <cstdlib> -> exit()
	const int SIZE = 60;
	char s1[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(s1, SIZE);
	//ǿ���ļ���Ϊ"test_in.txt"
	strcpy_s(s1, "test_in.txt");
	cout << s1 << endl;
	inFile.open(s1);
	if(!inFile.is_open())
	{
		cout << "Could not open the file " << s1 << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	//��ʾ�ļ�������û�ж�д����Ҳ���ǻ��ģ�Ҳû�н���
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}
	//�Ƿ񵽴�EOF(End Of File)
	if (inFile.eof())
		cout << "End of file reached." << endl;
	//�Ƿ����Ͳ�ƥ��
	else if (inFile.fail())
		cout << "Input terminated by data mismatch." << endl;
	else
		cout << "Input terminated for unknown reason." << endl;
	if (count == 0)
		cout << "No data processed." << endl;
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();

	return 0;
}