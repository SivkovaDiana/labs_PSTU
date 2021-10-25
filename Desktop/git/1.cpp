#include <iostream>                        
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");

    int x, a, b, c;

    cout << "Введите трехзначное число: \n";
    cin >> x;

    while ((x < 100) || (x > 999))
    {
        cout << "Введенное число не трехзначное, повторите ввод: \n";
        cin >> x;
    }
    a = x % 10;
    x = x / 10;
    b = x % 10;
    c = x / 10;

    while ((a == b) || (a == c) || (b == c))
    {
        cout << "Цифры не должны повторяться! Введите число еще раз: ";
        cin >> x;
        a = x % 10;
        x = x / 10;
        b = x % 10;
        c = x / 10;
    }

    cout << "Все возможные последовательности чисел: \n";
    cout << " " << a << b << c << ",";
    cout << " " << a << c << b << ",";
    cout << " " << b << a << c << ",";
    cout << " " << b << c << a << ",";
    cout << " " << c << a << b << ",";
    cout << " " << c << b << a << ",";

    if ((a > b) && (a > c))
    {
        cout << "\n\nНаибольшее из этих чисел: " << a;
        if (b > c)
        {
            cout << b << c;
        }
        else
        {
            cout << c << b;
        }
        cout << endl;
    }
    else
    {
        if ((b > a) && (b > c))
        {
            cout << "\n\nНаибольшее из этих чисел: " << b;
            if (a > c)
            {
                cout << a << c;
            }
            else
            {
                cout << c << a;
            }
            cout << endl;
        }
        else
        {
            if ((c > b) && (c > a))
            {
                cout << "\n\nНаибольшее из этих чисел: " << c;
                if (b > a)
                {
                    cout << b << a;
                }
                else
                {
                    cout << a << b;
                }
                cout << endl;
            }
            else
            {
                cout << a << b;
            }
        }
    }
    return 0;
}
