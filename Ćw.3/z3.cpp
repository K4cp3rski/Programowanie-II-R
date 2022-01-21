#include<iostream>
#include <cfloat>
using namespace std;

void trojkat(int n)
{
	cout << "n" << endl;
	for (int i=0; i<n-1; i++)
	{
		cout << "n";
		if (i>0)
		{
			for (int b=0; b<=i; b++) cout << " ";
		}
		cout << "n" << endl;
	}
	if (n>1) for (int c=0; c<=n+1; c++) cout << "n";
}