#include <iostream>
#include <vector>
#include "Wielomian.h"
#include "Funkcja.h"
#include "Gauss.h"

using namespace std;

int main() {
    /*
    std::cout << "Hello, World!" << std::endl;
    vector<int> v =  {3,2,6,0,0,1};
    vector<int> v2 =  {2,-3,5,0,1};
    int d_beg = 0;
    int d_end = 10;
    int mu = 5;
    int sgm = 2;
    int x = 6;
    Wielomian p1 = Wielomian(v, d_beg, d_end);
    Wielomian p2 = Wielomian(v2, d_beg, d_end);
    Gauss g1 = Gauss(mu, sgm, d_beg, d_end);
    cout << "Wielomiany na których pracujemy: " << endl << p1 << p2;
    cout << "Sprawdźmy:\n - wartość p1 w punkcie x=" << x << ": " << p1.f(x) << endl <<
    " - wartość p2 w punkcie x=" << x << ": " << p2.f(x) << endl;
    cout << "Wartość Gaussa w punkcie x=" << x << ": " << g1.f(x) << endl;
    p1.Status();
    p2.Status();
    g1.Status();
    */

//    Komendy zgodne z treścią polecenia ->
    cout << "\n\nPolecenie z Google Drive\n\n" << endl;
    vector<int> v_p = {1 ,-4, 1};
    int d_pol_beg = -10;
    int d_pol_end = 10;
    Wielomian W = Wielomian(v_p, d_pol_beg, d_pol_end);
    cout << "Wielomian W(0) = " << W.f(0) << endl << "Wielomian W(1) = " << W.f(1) << endl;
//    cout << "Wielomian W(11) = " << W.f(11);
// Nie polecam odkomentowywać linijki wyżej, wyrzuca to exception, że x jest poza dziedziną
    Gauss g_p = Gauss(1, 1, d_pol_beg, d_pol_end);
    cout << "Gauss g_p(0) = " << g_p.f(0) << endl << "Gauss g_p(1) = " << g_p.f(1) << endl;
//    cout << "Wielomian W(11) = " << W.f(11);
// Nie polecam odkomentowywać linijki wyżej, wyrzuca to exception, że x jest poza dziedziną
    W.Status();
    g_p.Status();

    return 0;
}
