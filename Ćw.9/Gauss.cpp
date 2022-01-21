//
// Created by Kacper Cybiński on 17/12/2021.
//

#include "Gauss.h"

using namespace std;

Gauss::Gauss() {
    x0 = sigma = 0;
}

Gauss::Gauss(int mu, int sigma) {
    this->x0 = mu;
    this->sigma = sigma;
}

Gauss::Gauss(int mu, int sigma, double min_arg, double max_arg) {
    this->x0 = mu;
    this->sigma = sigma;
    this->xmin = min_arg;
    this->xmax = max_arg;
}

double Gauss::GetGauss(double x) {
    return exp(-0.5*pow((x-this->x0), 2)/(pow(this->sigma, 2)));
}

double Gauss::f(double x) {
    if (this->xmin <= x && x <= this->xmax) {
        return GetGauss(x);
    } else throw std::invalid_argument("Punkt poza dziedziną!");
}

void Gauss::Status() {
    cout << "||PARAMETRY FUNKCJI OBIEKTU KLASY 'Gauss'||\n" << endl;
    cout << "Dziedzina: [" << this->xmin << ", " << this->xmax << "]" << endl;
    cout << "Współczynniki funkcji Gaussa: x0 = " << x0 << ", sigma = " << sigma << endl;
}






