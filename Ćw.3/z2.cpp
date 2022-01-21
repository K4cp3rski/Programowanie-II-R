#include<iostream>
#include <cfloat>
using namespace std;

void print_row(int a)
{
	int b=1;
	for (int i=0; i<10; i++)
	{
		cout << a << "*" << b << "=" << a*b << "\t";
		b+=1;
	}
	cout << endl;
}

void tabliczka()
{
	cout << "Tabliczka mnożenia" << endl;
	for (int i=1;i<=10;i++)
	{
		print_row(i);
	}
}