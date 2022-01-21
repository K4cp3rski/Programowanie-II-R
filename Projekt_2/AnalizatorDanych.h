//
// Created by Kacper Cybiński on 27/12/2021.
//

#ifndef PROJEKT_2_ANALIZATORDANYCH_H
#define PROJEKT_2_ANALIZATORDANYCH_H

#include <string>

using namespace std;

class AnalizatorDanych {
public:
    virtual void nowe_dane(string kanal, string odczyty) = 0;
    virtual vector<string> lista_czujnikow() const = 0;
    virtual double objetosc(string id_czujnika) = 0;
};



#endif //PROJEKT_2_ANALIZATORDANYCH_H
