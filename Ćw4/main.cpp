//
// Created by Kacper Cybiński on 05/11/2021.
//

#include<iostream>
#include<cmath>
#include<string>
#include<random>
#include<iomanip>
#include<vector>
#include<set>
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

void matrix_transpose(int M2[][N])
{
    int MT[N][N];
    for (int i=0;i<N;i++) // i to numer wiersza
    {
        for (int j=0;j<N;j++) // j to numer kolumny
        {
            MT[i][j] = M2[j][i];
        }
    }

    for (int i=0;i<N;i++) // i to numer wiersza
    {
        for (int j=0;j<N;j++) // j to numer kolumny
        {
            M2[i][j] = MT[i][j];
        }
    }
//    MT = M2;
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


// Zadanie 2

void Pascal()
{
    int P[13][13] = {{0}};
    for (auto & j : P)
        j[0] = 1;
    for (int i=1;i<13;i++) // Numer wiersza
        for (int j = 1; j < 13; j++) // Numer elementu
            P[i][j] = P[i - 1][j - 1] + P[i - 1][j];
    for (int j = 1; j < 11; j++) // Numer elementu
        P[12][j] = P[11][j - 1] + P[11][j + 1];

//    Drukowanie trójkąta
    for (int i=0;i<13;i++) // i to numer wiersza
    {
        cout << std::setw((13-i)*2) << " ";
        for (int j=0;j<13;j++) // j to numer kolumny
        {
            if (P[i][j] != 0)
                std::cout << std::setw(5) << P[i][j];
            else
                std::cout << std::setw(5) << " ";
        }
        std:cout << endl;
    }
}

//    Zadanie 1 - 5.11

double* aver (double* arr, int size, double& average)
{
    double* final = arr;
    double closest=0;
    for (int i=0;i<size;i++)
        average += arr[i];
    average /= size;
    for (int i=0;i<size;i++)
        {
        if (std::abs(arr[i]-average) < std::abs(average-closest))
            {
                closest = arr[i];
                final = &arr[i];
            }
        }
    return final;
}

//    Zadanie 3 -> 5.11
bool allDiff (const vector<int>Tab)
{
    int j=Tab[0];
    for (auto &i: Tab)
        if (i != j) return false;
    return true;
}

unsigned int numDiff (const vector<int>& tab)
{
    set<int> diff;
    for (auto &i: tab)
        diff.insert(i);
    return diff.size();
}

vector<int> SieveOfErastothenes (int n)
{
    bool prime[n+1];
    vector<int> output;
    memset(prime, true, sizeof(prime));
    for (int num=2; num * num <= n; num++)
    {
        if (prime[num])
        {
            for (int k = num * num; k <= n; k+= num)
                prime[k] = false;
//            cout << num << endl;
        }
    }
    for (int i=2; i < sizeof(prime); i++)
    {
        if (prime[i]) output.push_back(i);
    }
    return output;
}

int fillWithPrimes (vector<int>& tab)
{
    int cond = 50;
    vector<int> primes = SieveOfErastothenes(cond);
    if (primes.size() >= tab.size()){
        primes.resize(tab.size());
        tab = primes;
    }
    else
    {
        cond *= 2;
        vector<int> tmp = SieveOfErastothenes(cond);
        primes = tmp;
    }
    return primes.back();
}

void print_vec(const vector<int>& vec_in)
{
    for (auto i : vec_in)
        cout << i << ' ';
    cout << endl;
}

size_t tabRem (vector<int>& tab, size_t from, size_t to)
{
    for (size_t i = from; i <   to; i++)
        tab.erase(tab.begin() + from);
    return tab.size();
}


/*
int main()
{
//    Zadanie 1

//    int M[N][N];
//    matrix(M);
//    matrix_print(M);
//    matrix_transpose(M);
//    std::cout << endl;
//    matrix_print(M);

//    Zadanie 2
//    Pascal();

//    Zadanie 1 -> 5.11
//    double arr[] = {1, 7, 5, 4, 3, 2, 8, 9, -1, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    double average = 0;
//    const double* p = aver (arr, size, average);
//    cout << *p << " " << average << endl;

//    Zadanie 3 -> 5.11
    vector<int> Tab = {3, 2, 3, 2, 5};
    cout << "allDiff: " << boolalpha << allDiff(Tab) << endl;
    cout << "numDiff: " << numDiff (Tab) << endl;
    int a = fillWithPrimes(Tab);
    cout << "Vector with primes: "; print_vec(Tab); cout << "Last of the primes: " << a << endl;
    print_vec(SieveOfErastothenes(20));
    cout << "Wektor Tab po usunięciu elementów od 2 do 4 ma rozmiar: " << tabRem(Tab, 1, 3) << endl;
    cout << "Ta tablica po usunięciu elementów to: ";
    print_vec(Tab);

    return 0;
} */

int main()
{
    vector<int> Tab = {3, 2, 3, 2, 5};
    cout << "allDiff: " << boolalpha << allDiff(Tab) << endl;
    cout << "numDiff: " << numDiff (Tab) << endl;
    vector<int> TabPrimes (15, 0);
    auto LastPrime = fillWithPrimes (TabPrimes);
    cout << "Primes: ";
    for (auto p : TabPrimes)
        cout << p << " ";
    cout << endl;
    cout <<"Last: " << LastPrime << endl;
    vector<int> TabBlock = {1, 2, 3, 4, 5, 6, 7};
    cout << "Original vec: ";
    for (auto x : TabBlock)
        cout << x << " ";
    cout << endl;
    auto newDimh = tabRem (TabBlock , 2, 5);
    cout << "After removing: ";
    for (auto x : TabBlock)
        cout << x << " ";
    cout << endl;
    return 0;
}