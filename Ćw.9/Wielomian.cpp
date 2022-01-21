//
// Created by Kacper Cybiński on 17/12/2021.
//

#include "Wielomian.h"

#include <vector>
#include <iostream>
#include <cmath>
#include "Wielomian.h"
using namespace std;

void MultiplyVectorByScalar(vector<int> &v, int k){
    for_each(v.begin(), v.end(), [k](int &c){ c *= k; });
}

void get_coeffs(vector<int> &in){
    cout << "[ ";
    for (auto & i: in)
    {
        cout << i << " ";
    }
    cout << "]";
}

auto empty_swap(std::vector<int>& vec) {
    std::vector<int>().swap(vec);
    return vec.capacity();
}

Wielomian::Wielomian()
{
    coeffs.push_back(0);
}


Wielomian::Wielomian(vector<int> coeffs_in)
{
    for (auto & i: coeffs_in)
    {
        coeffs.push_back(i);
    }
}

Wielomian::Wielomian(vector<int> coeffs_in, int min_arg, int max_arg) {
    for (auto & i: coeffs_in)
    {
        coeffs.push_back(i);
    }
    this->xmin = min_arg;
    this->xmax = max_arg;
}

Wielomian::Wielomian(int n, int *tab) {
    for (int i=0;i<n;i++)
    {
        coeffs.push_back(tab[i]);
    }
}

void Wielomian::Print()
{
    int deg=0;
    for (auto & i: coeffs)
    {
        if (i == 0) {deg ++; continue;}
        if (deg == 0)
        {
            cout << i;
            deg++;
            continue;
        }
        if (deg == 1)
        {
            if (deg <= coeffs.size() and i>0) cout << "+";
            cout << i <<"x";
            deg++;
            continue;
        }
        if (deg > 1)
        {
            if (deg <= coeffs.size() and i>0) cout << "+";
            cout << i <<"x^" << deg;
            deg++;
        }
    }
    cout << "\n";
}

int Wielomian::Deg() {
    return coeffs.size()-1;
}

int Wielomian::GetCoefficient(int n) {
    return this->coeffs.at(n);
}

void Wielomian::SetCoefficient(int n, int coeff) {
    if (n <= this->Deg()) {this->coeffs.at(n) = coeff;}
    else
    {
        vector<int> new_coeffs(n);
        for (int i=0; i < this->Deg();i++) new_coeffs.at(i) = this->coeffs.at(i);
        this->coeffs.assign(new_coeffs.begin(), new_coeffs.end());
    }
}

double Wielomian::GetValue(double x) {
    double val = 0;
    for (int deg=0; deg <= this->Deg(); deg++)
    {
        val += this->coeffs.at(deg) * pow(x, deg);
    }
    return val;
}

ostream &operator<<(ostream &strumien, Wielomian &Poly) {
    int deg=0;
    for (auto & i: Poly.coeffs)
    {
        if (i == 0) {deg ++; continue;}
        if (deg == 0)
        {
            strumien << i;
            deg++;
            continue;
        }
        if (deg == 1)
        {
            if (deg <= Poly.coeffs.size() and i>0) strumien << "+";
            strumien << i <<"x";
            deg++;
            continue;
        }
        if (deg > 1)
        {
            if (deg <= Poly.coeffs.size() and i>0) strumien << "+";
            strumien << i <<"x^" << deg;
            deg++;
        }
    }
    strumien << "\n";
    return strumien;
}

double Wielomian::f(double x) {
    if (this->xmin <= x && x <= this->xmax) {
        return GetValue(x);
    } else throw invalid_argument("Punkt poza dziedziną!");
}

Wielomian::~Wielomian() = default;

void Wielomian::Status() {
    cout << "||PARAMETRY FUNKCJI OBIEKTU KLASY 'Wielomian'||\n\n" << endl;
    cout << "Dziedzina: [" << this->xmin << ", " << this->xmax << "]" << endl;
    cout << "Współczynniki wielomianu: ";
    get_coeffs(this->coeffs);
    cout << endl << endl;
}

