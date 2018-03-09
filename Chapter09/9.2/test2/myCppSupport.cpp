#include <iostream>
using std::cout; 
using std::endl;

//ʹ���ⲿ����ı���warming
extern double warming;

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to " << warming << endl;
}

void local()
{
	double warming = 0.8;
	cout << "Local warming is " << warming << endl;
	cout << "But global warming is " << ::warming << endl;
}