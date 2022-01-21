#include<iostream>
#include <cfloat>
using namespace std;

float EPS1()
{
	float E1=1.0;
	while ((float)1.0 + E1/(float)2.0 != (float)1.0)
	{
		E1 /= 2.0;
	}
	return E1;
}

float EPS2()
{
	float E2=1.0;
	do 
	{
		E2 /= 2.0;
	} while ((float)1.0 + E2/(float)2.0 != (float)1.0);
	return E2;
}