#include <iostream>                        
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float c, f;
    cout << "Градусы по Фаренгейту " << endl;
    cin >> f;
    c = 5 * (f - 32) / 9;
    cout << "Градусы по Цельсию " << c;
    return 0;
}
