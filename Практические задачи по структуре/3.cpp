#include <iostream>                        
using namespace std;
int main()
{
    int y, z;
    const int x = 10;
    y = x * 2;
    z = y--;
    cout << x << ' ' << z << ' ' << y;
    return 0;
}
