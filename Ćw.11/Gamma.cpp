//
// Created by Kacper Cybiński on 21/01/2022.
//

#include "Gamma.h"
#include <random>
using namespace std;

int r_int_normal(int mu, int sigma)
{
    random_device rd;
    default_random_engine engine(rd());
    normal_distribution<double> distribution(mu,sigma);
    return distribution(engine);
}