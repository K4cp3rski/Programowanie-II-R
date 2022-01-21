#include<iostream>
#include<math.h>
using namespace std;

// Zad 1

void powers()
{
	double i=0;
	while (i<10)
	{
		int result[3];
		result[0] = i;
		result[1] = pow(i, 2);
		result[2] = pow(i, 3);
		// printf("Liczba = %.0lf, Kwadrat = %.0lf, sześcian = %.0lf\n", i, pow(i, 2), pow(i, 3));
		cout << "Liczba = " << result[0] << " Kwadrat = " << result[1] << " Sześcian = " << result[2] << endl;


		i++;
	}
}
// Zadanie 2

bool isDivider(int x1, int x2)
{
	if (x1%x2 == 0) return true;
	else return false;
}

bool isPrime(int x)
{
	int i=2;
	int divisors=1;
	if (x==1) return false;
	else do
	{
		bool tmp = isDivider(x, i);
		i++;
		if (tmp == true) divisors++;
	} while (i <= x);
	if (divisors == 2) return true;
	else return false;
}

double Factorial(int x)
{
	int i=1;
	double out=1;
	while (i <= x)
	{
		out = out * i;
		i++;
	}
	return out;
}

double FactorialRec (int x)
{
	if (x>1) return FactorialRec(x-1) * x;
	else return 1;
}

long double Fibonacci(int n=5)
{
	if (n>1) return Fibonacci(n-2) + Fibonacci(n-1);
	else if (n == 1) return 1;
	else return 0;
}

void Fib_Druk(int n)
{
	int i=0;
	while (i <= n) 
	{
		cout << " " << Fibonacci(i);
		i++;
	}
}

int main()
{
	// printf("Hello World!\n");
	// powers();
	int j = 4;
	int i = 2;
	int k = 7;
	int l = 8;
	int m;
	cout << "Liczba " << i << " jest/nie jest dzielnikiem " << j << " --> " << isDivider(j,i) << endl;
	cout << "Liczba " << k << " jest/nie jest pierwsza " << " --> " << isPrime(k) << endl;
	cout << "Silnia liczby " << l << " to " << " --> " << Factorial(l) << endl;
	cout << "Silnia liczby " << l << " to " << " --> " << FactorialRec(l) << endl;
	cout << "Wyraz numer " << l << " w ciągu Fibonacciego to" << " --> " << Fibonacci(l) << endl;
	cout << "Pierwsze " << l << " wyrazów w ciągu Fibonacciego to " << " --> "; Fib_Druk(l); cout << endl;
	cout << "Wyraz o domyślnym numerze w ciągu Fibonacciego to" << " --> " << Fibonacci() << " ,czyli wyraz numer 5" << endl << endl << "Koniec części demonstracyjnej" << endl << endl;
	cout << "Podaj który wyraz chcesz zobaczyć: " << endl;
	cin >> m;
	cout << "Wyraz numer " << m << " w ciągu Fibonacciego to" << " --> " << Fibonacci(m) << endl;
	return 0;
}