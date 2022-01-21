//
// Created by Kacper Cybiński on 17/12/2021.
//

#ifndef W_9_FUNKCJA_H
#define W_9_FUNKCJA_H

class Funkcja {
public:
    double xmin, xmax;
    Funkcja();
    Funkcja(double min_arg, double max_arg);
    virtual double f(double x) = 0;
    virtual void Status() = 0;
};


#endif //W_9_FUNKCJA_H
