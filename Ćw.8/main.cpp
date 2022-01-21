#include <iostream>
#include "Polynomial.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> v =  {3,2,6,0,0,1};
    vector<int> v2 =  {2,-3,5,0,1};
    Polynomial p1 = Polynomial(v);
    Polynomial p2 = Polynomial(v2);
    Polynomial p3;
    p1.Print();
    p2.Print();
    cout << "Dodawanie wielomianu 1 i wielomianu 2" << endl;
    p1.Add(p2);
    p1.Print();
//    p1.Multi(p2);
    cout << "Wielomian po pomnożeniu:\n";
    p1.Print();
    cout << "Stopień wielomianu to " << p1.Deg() << endl;
    cout << "Coefficient potęgi stopnia 5 w wielomianie "; p1.Print(); cout << "to: " <<p1.GetCoefficient(5) << endl;
    p1.SetCoefficient(5, 10);
    cout << "Coefficient potęgi stopnia 5 w wielomianie "; p1.Print(); cout << "to: " <<p1.GetCoefficient(5) << endl;
    cout << "Wartość tego wielomianu w punkcie 1 = " << p1.GetValue(1);
    p3 = p1+p2;
    cout << "\nWielomian p3 - dodanie do siebie p1 i p2. \np3 = ";
    p3.Print();
    p3 = -p3;
    cout << "\nNegacja Wielomianu p3. \np3 = " << p3;
    return 0;
}
