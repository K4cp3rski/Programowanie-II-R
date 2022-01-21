#include<iostream>
#include <cfloat>
#include<string>
#include<random>
using namespace std;

#define N 5

// void matrix_transpose(*int MT);
std::random_device rd;
std::default_random_engine engine(rd());//silnik
std::uniform_int_distribution<> distribution(0,20);//rozkład liczb całkowitych

int r_int()
{
	return distribution(engine);
}

int matrix(int M1[][N])
{
	// int M1[N][N];// = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	for (int i=0;i<N;i++) // i to numer wiersza
	{
		for (int j=0;j<N;j++) // j to numer kolumny
		{
			M1[i][j] = r_int();
		}
	}
	return M1[N-1][N-1];
}

void matrix_transpose(int M[][N])
{
    int M[][N];
	for (int i=0;i<N;i++) // i to numer wiersza
	{
		for (int j=0;j<N;j++) // j to numer kolumny
		{
			M[i][j] = MT[j][i];
		}
	}
    MT = M;
}

void matrix_print(int M1[][N])
{
	// int M1[N][N];
	for (int i=0;i<N;i++) // i to numer wiersza
	{
		for (int j=0;j<N;j++) // j to numer kolumny
		{
			std::cout << M1[i][j] << " ";
		}
		std:cout << endl;
	}
}

int main()
{
	int M[N][N];
	matrix(M);
	matrix_print(M);
	matrix_transpose(M);
	std::cout << endl;
	matrix_print(M);
	return 0;
}