#include <iostream>                        
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    char a, b, c, d, e;
    cout << "Введите символы " << endl;
    cin >> a >> b >> c >> d >> e;
    cout << "Обратная последовательность " << e << d << c << b << a;
    return 0;
}