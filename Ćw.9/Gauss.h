//
// Created by Kacper Cybiński on 17/12/2021.
//
#ifndef W_9_GAUSS_H
#define W_9_GAUSS_H

#include "Funkcja.h"
#include <cmath>
#include <iostream>

class Gauss: public Funkcja {
public:
    double x0;  // Położenie centroidy
    double sigma;  // Dyspersja gaussa
    Gauss();
    Gauss(int mu, int sigma);
    Gauss(int mu, int sigma, double min_arg, double max_arg);
    double GetGauss(double x);
    double f(double x);
    void Status();
};


#endif //W_9_GAUSS_H
