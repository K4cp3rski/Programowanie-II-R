//
// Created by Kacper Cybiński on 17/12/2021.
//
#include "Funkcja.h"
#include <iostream>
using namespace std;

Funkcja::Funkcja() {
    xmin = xmax = 0;
}

Funkcja::Funkcja(double min_arg, double max_arg) {
    xmin = min_arg;
    xmax= max_arg;
}
