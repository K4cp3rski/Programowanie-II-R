// Autor: Kacper Cybiński
// Zadanie 3, Seria projektów #1

#include <iostream>
#include <vector>
#include <map>
using namespace std;
// Słownik ze wszystkimi możliwymi stanami Rule 30
map<string,int> vals =
        {
                {"111", 0},
                {"110", 0},
                {"101", 0},
                {"100", 1},
                {"011", 1},
                {"010", 1},
                {"001", 1},
                {"000", 0}
        };
map<string, int>::iterator it;

// Funkcja która konweruje 0 lub 1 na biały/czarny kwadrat do wydrukowania w iostream
string set_box(int bin)
{
    string out_sym;
    if (bin == 1) out_sym = "\u25A1";  // Black box ascii
    if (bin == 0) out_sym = "\u25A0";  // White box ascii
    return out_sym;
}

// Funkcja drukująca wektor, drukująca 0 jako biały kwadrat, a 1 jako czarny.
void print_vec(const vector<int>& vec_in)
{
    for (auto i : vec_in)
    {
        string out_sym = set_box(i);
        cout << out_sym << " ";
    }
    cout << endl;
}

// Funkcja ustalająca wartość komórki w kolejnym pokoleniu zgodnie z zasadą Rule 30
vector<int> set_val(const vector<int>& current_line)
{
    vector<int> next_line;
    for (int i=0; i<current_line.size(); i++)
    {
        string state;  // Tu będziemy przechowywać naszą trójkę na podstawie której oceniamy stan w kolejnym pokoleniu

        try {  // Tutaj dodajemy pierwszy element trójki.
               // Jak próbujemy dodać element sprzed pierwszego elementu wiersza to przyjmujemy, że jest on równy "0"
            state += std::to_string(current_line.at(i-1));
        } catch (std::out_of_range& )
        {
            state += "0";
        }

        state += std::to_string(current_line.at(i));

        try {// Tutaj dodajemy trzeci element trójki.
             // Jak próbujemy dodać element po ostatnim elemencie wiersza to przyjmujemy, że jest on równy "0"
            state += std::to_string(current_line.at(i+1));
        } catch (std::out_of_range& )
        {
            state += "0";
        }


        it = vals.find(state);  // Szukamy w słowniku wartości odpowiadającej naszemu stanowi
        next_line.push_back(it->second);  // Komórka w kolejnym wierszu przyjmuje stan zadany przez słownik
    }
    return next_line;
}

// Główny program drukujący piramidę pokoleń oraz tok ewolucji pierwotnej komórki
void rule30(int iternum=15)
{
    // Tu tablica która będzie trzymać kolejne wiersze
    vector<vector<int>> heads;
    for (int i=0;i<=iternum;i++)
    {
        vector<int> row;
        for (int j=0;j<=2*iternum;j++)
        {
            row.push_back(0);
        }
        heads.push_back(row);
    }
    heads[0][iternum] = 1;  // Zadanie warunku początkowego
    for (int i=0;i<=iternum;i++)
    {
        try
        {
            heads.at(i+1) = set_val(heads.at(i));
        } catch (std::out_of_range& )
        {
            continue;
        }
    }


    for (auto & j: heads)
    {
        print_vec(j);
    }

    cout << endl << "Stan początkowej komórki w trakcie ewolucji:\n";
    for (int i=0;i<=iternum;i++) cout << set_box((heads.at(i)).at(iternum)) << " ";
    cout << endl;
}

void driver_program()
{
    int gen_num;
    cout <<"Proszę podać ile pokoleń ewolucji zasadą Rule 30 ma wygenerować program:\n";
    cin >> gen_num;
    rule30(gen_num);
    cout << "Wygenerowano "<< gen_num <<" pokoleń" << endl;
}

int main() {
    driver_program();
    return 0;
}
