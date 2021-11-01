#include <iostream>                        
using namespace std;
int main()
{

    setlocale(LC_ALL, "Russian");
    int a, b, res;
    cout << "Введите числа " << endl;
    cin >> a >> b;
    res = a * b;
    cout << "Произведение равно " << res << endl;
    return 0;
}