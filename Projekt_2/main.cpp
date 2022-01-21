#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

#include "Gazik.h"


vector<string> tokenize_main(string s, string del = "\t")
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


void load_data(string filename, Gazik &licznik)
{
    cout << "Beginning loading..." << endl;
    string line;
    ifstream dane;
    dane.open("/Users/k4cp3rskiii/Library/Mobile Documents/com~apple~CloudDocs/MISMaP/Programowanie II R/Projekt_2/log.txt", ios::in);
    if (dane.is_open())
    {
        while ( getline (dane,line) )
        {
            vector<string> rozdzielone = tokenize_main(line);
            string str = rozdzielone[0];
            std::size_t found = str.find_last_of("/\\");
            string last = str.substr(found+1);
            if (last == "magnetic")
            {
                licznik.nowe_dane(rozdzielone[0], rozdzielone[1]);
//                std::cout << " path: " << str.substr(0,found) << '\t';
//                std::cout << " type: " << last << '\n';
            }
//            std::cout << " path: " << str.substr(0,found) << '\t';
//            std::cout << " type: " << last << '\n';
        }
        dane.close();
    }
    else cout << "chuj " << filename;
    cout << "loading finished!" << endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    Gazik licznik;
    load_data("log.txt", licznik);
    licznik.druk_liste_czujnikow();
    licznik.objetosc("sensors/gen2020/01/magnetic");
    return 0;
}
