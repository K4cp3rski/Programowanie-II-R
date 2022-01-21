//
// Created by Kacper Cybiński on 03/12/2021.
//
#include <vector>

using namespace std;

#ifndef W_8_POLYNOMIAL_H
#define W_8_POLYNOMIAL_H


class Polynomial {
private:
    vector<int> coeffs;

public:
    Polynomial();
    ~Polynomial();
    explicit Polynomial(vector<int> coeffs_in);
    explicit Polynomial(int n, int tab[n]);
    void Print();
    int Deg();
    void Add(Polynomial&);
    void Multi(Polynomial&);
    int GetCoefficient(int n);
    void SetCoefficient(int n, int coeff);
    double GetValue(double x);
    Polynomial& operator= (const Polynomial&);
    Polynomial operator+ (const Polynomial&);
    Polynomial operator- ();
    friend ostream& operator<< (ostream& strumien , Polynomial& Poly) ;
};


#endif //W_8_POLYNOMIAL_H
