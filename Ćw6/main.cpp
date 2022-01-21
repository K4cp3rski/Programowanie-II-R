#include <iostream>
#include <random>
#include <cstdlib>
#include <valarray>
#include <cmath>
using namespace std;

int r_int_normal(int mu, int sigma)
{
    std::random_device rd;
    std::default_random_engine engine(rd());
    std::normal_distribution<double> distribution(mu,sigma);
    return distribution(engine);
}

double* zad1(int mu, int sigma)
{
    double tab[30];
    for (double & i : tab)
    {
        i = r_int_normal(mu, sigma);
    }
    cout << "Tablica wygenerowana: ";
    for (auto & i: tab) cout << i << ' ';
    valarray<double> arr(30);
    for (int i=0;i<30;i++)
    {
        arr[i] = tab[i];
    }
    double num[2];
    num[0] = arr.sum()/30;
    num[1] = sqrt((pow((arr-num[0]), 2.0)).sum()/30);
    return num;
}

int main(int argc, char *argv[])
    {
    double gauss[2];
    gauss[0] = zad1(atoi(argv[1]), atoi(argv[2]))[0];
    gauss[1] = zad1(atoi(argv[1]), atoi(argv[2]))[1];
    cout << "mu: " << gauss[0] << ",sigma: " << gauss[1];
    return 0;
    }