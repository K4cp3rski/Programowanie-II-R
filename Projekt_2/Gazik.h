//
// Created by Kacper Cybiński on 27/12/2021.
//

#ifndef PROJEKT_2_GAZIK_H
#define PROJEKT_2_GAZIK_H
#include "AnalizatorDanych.h"
#include "map"
#include "string"
#include "vector"
using namespace std;

class Gazik : AnalizatorDanych {
private:
    map<std::string, vector<vector<double>>> data;  // Każdy key słownika to czujnik. Jest mu przyporządkowany vector
    // składający się z trzech vectorów doubli odpowiadających trzem kanałom pomiarów dla każdego czujnika.
public:
    Gazik();
    void nowe_dane(string kanal, string odczyty) override;
    vector<string> lista_czujnikow() const override;
    void druk_liste_czujnikow();
    double objetosc(string id_czujnika) override;
};


#endif //PROJEKT_2_GAZIK_H
