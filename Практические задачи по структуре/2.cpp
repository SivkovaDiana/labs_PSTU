#include <iostream>                        
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float f, r;
    int g;
    f = 1 / 7.481;
    cout << "Введите число галлонов: ";
    cin >> g;
    r = g * f;
    cout << "Эквивалентный объем в кубических футах: " << r;
    return 0;
}