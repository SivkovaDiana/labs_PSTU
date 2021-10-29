#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int a, ans, c, p = 7;
	int pop = 0;
	srand(time(0));
	a = rand() % 100 + 1;
	cout << "Введите число от 1 до 100" << endl;
	cout << "У вас 7 попыток, удачи!" << endl;
	while (p != 0) 
	{
		for (int i = 0; i < 7; i++)
		{
			cin >> ans;
			pop++;
			cout << pop << "- я попытка: " << ans << endl;
			if ((ans > a) and (p != 0))
			{
				cout << "Нужное число меньше чем " << ans << "!" << endl;
				p--;
			}
			if ((ans < a) and (p != 0))
			{
				cout << "Нужное число больше чем " << ans << "!" << endl;
				p--;
			}
			if (ans == a)
			{
				cout << "Поздравляю, кажется, в вашем роду была Ванга!" << endl;
				p = 0;
			}
		}
	}
	if ((p == 0) and (ans!= a)) 
	{
		cout << "Не экстрасенс :(" << endl;
		cout << "Правильный ответ: " << a << endl;
	}
	return 0;
}