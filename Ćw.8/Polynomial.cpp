//
// Created by Kacper Cybiński on 03/12/2021.
//
#include <vector>
#include <iostream>
#include <cmath>
#include "Polynomial.h"
using namespace std;

void MultiplyVectorByScalar(vector<int> &v, int k){
    for_each(v.begin(), v.end(), [k](int &c){ c *= k; });
}

auto empty_swap(std::vector<int>& vec) {
    std::vector<int>().swap(vec);
    return vec.capacity();
}

Polynomial::Polynomial()
{
    coeffs.push_back(0);
}


Polynomial::~Polynomial() = default;

Polynomial::Polynomial(vector<int> coeffs_in)
{
    for (auto & i: coeffs_in)
    {
        coeffs.push_back(i);
    }
}

Polynomial::Polynomial(int n, int *tab) {
    for (int i=0;i<n;i++)
    {
        coeffs.push_back(tab[i]);
    }
}

void Polynomial::Print()
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

int Polynomial::Deg() {
    return coeffs.size()-1;
}

void Polynomial::Add(Polynomial & added) {
    vector<int> new_coeffs;
    if (this->coeffs.size() <= added.coeffs.size()) {
        for (int i = 0; i < coeffs.size(); i++) {
            new_coeffs.push_back(this->coeffs.at(i) + added.coeffs.at(i));
        }
        for (int i=coeffs.size(); i < added.coeffs.size();i++)
        {
            new_coeffs.push_back(added.coeffs.at(i));
        }
    }
    else if (this->coeffs.size() == added.coeffs.size()){
        for (int i = 0; i < coeffs.size(); i++) {
            new_coeffs.push_back(this->coeffs.at(i) + added.coeffs.at(i));
        }
    } else if (this->coeffs.size() > added.coeffs.size()){
        for (int i = 0; i < added.coeffs.size(); i++) {
            new_coeffs.push_back(this->coeffs.at(i) + added.coeffs.at(i));
        }
        for (int i=added.coeffs.size(); i < coeffs.size();i++)
        {
            new_coeffs.push_back(this->coeffs.at(i));
        }
    }
    this->coeffs.assign(new_coeffs.begin(), new_coeffs.end());
}

void Polynomial::Multi(Polynomial & added) {
    Polynomial first = Polynomial(this->coeffs);
    for (int deg=0;deg<=added.Deg();deg++)
    {
        int i = added.GetCoefficient(deg);
        if (i == 0) {continue;}
        if (deg == 0)
        {
            MultiplyVectorByScalar(first.coeffs, i);
            continue;
        }
        if (0 < deg < added.Deg())
        {
            int new_size = this->Deg() + deg;
            Polynomial multiplied = Polynomial(this->coeffs);
            vector<int> tmp1(new_size+1);
            Polynomial new_coeffs = Polynomial(tmp1);
//            cout << "New_coeffs: ";
//            new_coeffs.Print();
            MultiplyVectorByScalar(multiplied.coeffs, i);
            for (int g=0;g <= this->Deg(); g++)
            {
                new_coeffs.coeffs.at(g+deg) = multiplied.coeffs.at(g);
//                cout << new_coeffs.coeffs[g] << "\n";
            }
//            multiplied.Add(new_coeffs);
//            this->coeffs = multiplied.coeffs;
              cout << "Mnożymy przez " << i << "x^" << deg <<  " new_coeffs: ";
            new_coeffs.Print();
            cout << "Obecne współcznniki to: ";
            first.Print();
//            first.Add(new_coeffs);
            first.Add(new_coeffs);
            continue;
        }
    }
    this->coeffs.assign(first.coeffs.begin(), first.coeffs.end());
//    this->coeffs = first;
}


int Polynomial::GetCoefficient(int n) {
    return this->coeffs.at(n);
}

void Polynomial::SetCoefficient(int n, int coeff) {
    if (n <= this->Deg()) {this->coeffs.at(n) = coeff;}
    else
    {
        vector<int> new_coeffs(n);
        for (int i=0; i < this->Deg();i++) new_coeffs.at(i) = this->coeffs.at(i);
        this->coeffs.assign(new_coeffs.begin(), new_coeffs.end());
    }
}

double Polynomial::GetValue(double x) {
    double val = 0;
    for (int deg=0; deg <= this->Deg(); deg++)
    {
        val += this->coeffs.at(deg) * pow(x, deg);
    }
    return val;
}

Polynomial &Polynomial::operator=(const Polynomial & assigned) {
    this->coeffs.assign(assigned.coeffs.begin(), assigned.coeffs.end());
    return *this;
}

Polynomial Polynomial::operator+(const Polynomial & second) {
    Polynomial result;
    result.coeffs.assign(this->coeffs.begin(), this->coeffs.end());
    result.Add(const_cast<Polynomial &>(second));
    return result;
}

Polynomial Polynomial::operator-() {
    MultiplyVectorByScalar(this->coeffs, -1);
    return *this;
}

ostream &operator<<(ostream &strumien, Polynomial &Poly) {
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


