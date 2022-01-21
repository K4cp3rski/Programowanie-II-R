#include<iostream>
#include <cfloat>
#include<string>
#include<random>
#include"z1.cpp"
#include"z2.cpp"
#include"z3.cpp"
#include"z4.cpp"
#include"z5.cpp"
using namespace std;


int main()
{
	cout << endl << "Zadanie 1" << endl;
	
	cout << "Machine epsilon metodą 1: " << EPS1() << endl;
	cout << "Machine epsilon metodą 2: " << EPS2() << endl;
	cout << "Machine epsilon metodą 3: " << numeric_limits<float>::epsilon() << endl;
	

	cout << endl << "Zadanie 2" << endl;
	
	tabliczka();
	

	cout << endl << "Zadanie 3" << endl;
	
	trojkat(9);
	

	cout << endl << "Zadanie 4" << endl;
	
	cout << endl << "1.2 + 2.0 = " << (float) calc(1.2,2.0,'+') << endl;
	

	cout << endl << "Zadanie 5" << endl;
	
	tabs();
	
	return 0;
}