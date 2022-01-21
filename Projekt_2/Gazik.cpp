//
// Created by Kacper Cybiński on 27/12/2021.
//

#include "Gazik.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include<algorithm>
using namespace std;



// A quick way to split strings separated via spaces.
vector<double> tokenizer (string s)
{
    vector<double> output;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        double word2 = stod(word);
        output.push_back(word2);
    }
    return output;
}

vector<string> tokenize(string s, string del = " ")
{
    vector<string> output;
    int start = 0;
    int end = s.find(del);
    while (end != -1) {
        string word = s.substr(start, end - start);
        output.push_back(word);
        start = end + del.size();
        end = s.find(del, start);
    }
    string word = s.substr(start, end - start);
    output.push_back(word);
    return output;
}

void Gazik::nowe_dane(string kanal, string odczyty){
    if (data.count(kanal) != 0){
        vector<double> readings = tokenizer(odczyty);
        for (int i=0;i<3;i++)
        {
            data[kanal][i].push_back(readings.at(i));
        }
    }
    else
    {
        vector<double> readings = tokenizer(odczyty);
        vector<double> x; vector<double> y; vector<double> z;
        vector<vector<double>> field {x,y,z};
        data[kanal] = field;
        for (int i=0;i<3;i++)
        {
            data[kanal][i].push_back(readings.at(i));
        }
    }


}

vector<string> Gazik::lista_czujnikow() const {
    vector<string> keys;
    for (auto const& imap: this->data)
    keys.push_back(imap.first);
    return keys;
}

double Gazik::objetosc(string id_czujnika) {
    //    Tutaj okresy dla kanałów x, y, z.
    int period_x = 0, period_y = 0, period_z = 0;
//    Tutaj okres uśredniony - jego użyjemy do obliczania objętości.
    double period_avg = 0, volume = 0;


//    To wrzucimy w pętlę dla wszystkich 3 kanałów
    for (int pos=0; pos<=2;pos++)
    {
//    Tutaj deklarujemy zmienne na której będziemy trzymać wartość znalezionego minimum i pozycję (czas) szukanego
//    minimum po znalezionym okresie. Uśrednimy wartości znalezionych okresów dla x, y, z.
        double min_1 = 0, min_2 = 0;
        int pos_min_1 = 0, pos_min_2 = 0;
//    Analogicznie dla maksimum
        double max_1 = 0, max_2 = 0;
        int pos_max_1 = 0, pos_max_2 = 0;
        int num = 0;
        double period_tmp;
        int period_max = 0;
        bool period_max_found = true;
        int period_min = 0;
        bool period_min_found = false;
        int num_changes_min = 0;
        int num_changes_max = 0;
        int num_bigger_than_min = 0;
        int num_lower_than_max = 0;

        vector<double> v = this->data[id_czujnika][pos];
        double smallest_element = *min_element(v.begin(), v.end());

        double largest_element = *max_element(v.begin(), v.end());

//        cout << "Minimum: " << smallest_element << ", Maksimum: " << largest_element << endl;

        for (auto &val: this->data[id_czujnika][pos]) {
    //        Szukamy miniumum 1
            if (abs(val - smallest_element) < abs(0.05 * smallest_element) && min_1 == 0) {
                min_1 = val;
                pos_min_1 = num;
            }
    //        Szukamy maksimum 1
            if (abs(val - largest_element) < abs(0.05 * largest_element) && max_1 == 0) {
                max_1 = val;
                pos_max_1 = num;
            }

    //        Teraz szukamy kolejnego minimum i maksimum

            if (min_1 != 0 && max_1 != 0)
            {
                if (pos_min_1 > pos_max_1)
                    // Tutaj odpowiada to sytuacji, że najpierw jest maksimum a potem minimum
                {
                    //        Szukamy maksimum 2
                    if (abs(val - largest_element) < abs(0.05 * largest_element)
                        && max_2 == 0 && max_1 != 0 && num > pos_min_1) {
                        max_2 = val;
                        pos_max_2 = num;
                    }

                    //        Szukamy miniumum 2
                    if (abs(val - smallest_element) < abs(0.05 * smallest_element)
                        && min_2 == 0 && min_1 != 0 && num > pos_max_2 && max_2 != 0) {
                        min_2 = val;
                        pos_min_2 = num;
                    }

                } else {
                    //        Szukamy miniumum 2
                    if (abs(val - smallest_element) < abs(0.05 * smallest_element)
                        && min_2 == 0 && min_1 != 0 && num > pos_max_1) {
                        min_2 = val;
                        pos_min_2 = num;
                    }
                    //        Szukamy maksimum 2
                    if (abs(val - largest_element) < abs(0.05 * largest_element)
                        && max_2 == 0 && max_1 != 0 && num > pos_min_2 && min_2 != 0) {
                        max_2 = val;
                        pos_max_2 = num;
                    }
                }
            }
            num += 1;
        }
        period_max = pos_max_2 - pos_max_1;
        period_min = pos_min_2 - pos_min_1;
        period_tmp = (period_min + period_max) / 2;
        if (pos == 0) period_x = period_tmp;
        if (pos == 1) period_y = period_tmp;
        if (pos == 2) period_z = period_tmp;

//        cout << endl << "Kanał num: " << pos << endl;
//        cout << "Max_1 = " << max_1 << " Min_1 = " << min_1 << endl ;
//        cout << "Pozycja_Max_1 = " << pos_max_1 << " Pozycja_Min_1 = " << pos_min_1 << endl ;
//        cout << "Max_2 = " << max_2 << " Min_2 = " << min_2<< endl ;
//        cout << "Pozycja_Max_2 = " << pos_max_2 << " Pozycja_Min_2 = " << pos_min_2 << endl << endl;
    }
    period_avg = (period_x + period_y + period_z)/3;
    double time = this->data[id_czujnika][0].size();
    volume = time/period_avg * 0.1;
    cout << "Objętość gazu jaka uleciała dla czujnika "  << id_czujnika << " to: " << volume << "m^3";
    return 0;
}

void Gazik::druk_liste_czujnikow() {
    vector<string> list = this->lista_czujnikow();
    cout << "Lista czujników: \n";
    for(auto &i : list)
        cout << i << "\n";
}

Gazik::Gazik() = default;
