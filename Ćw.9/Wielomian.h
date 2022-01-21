//
// Created by Kacper Cybiński on 17/12/2021.
//

#include <vector>
#include "Funkcja.h"

using namespace std;

#ifndef W_9_WIELOMIAN_H
#define W_9_WIELOMIAN_H

class Wielomian: public Funkcja {
private:
    vector<int> coeffs;

public:
    Wielomian();
    ~Wielomian();
    explicit Wielomian(vector<int> coeffs_in);
    explicit Wielomian(vector<int> coeffs_in, int min_arg, int max_arg);
    explicit Wielomian(int n, int tab[n]);
    void Print();
    int Deg();
    int GetCoefficient(int n);
    void SetCoefficient(int n, int coeff);
    double GetValue(double x);
    double f(double x);
    friend ostream& operator<< (ostream& strumien , Wielomian& Poly) ;
    void Status();
};


#endif //W_9_WIELOMIAN_H
