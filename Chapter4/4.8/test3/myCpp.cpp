#include <iostream>
#include <cstring>
using namespace std;

char * getname(void);

int main()
{
	char * a1;

	a1 = getname();
	cout << a1 << " at " << (int*)a1 << endl; 
	//delete[] a1;

	a1 = getname();
	cout << a1 << " at " << (int*)a1 << endl;
	//delete[] a1;

	return 0;
}

char * getname()
{
	char a[80];
	cout << "Enter a: ";
	cin >> a;
	char * a1 = new char[strlen(a) + 1];
	strcpy_s(a1, 20, a);

	return a1;
}
