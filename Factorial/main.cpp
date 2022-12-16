#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	// Задание 1

	int i = 1, fact = 1, n;
	cout << "Введите число: " << endl; cin >> n;

	while (i <= n)
	{
		fact *= i++;

	}
	cout << "Факториал числа " << n << "=" << fact << endl;;

	

	// Задание 2

	int num, degr, res=1;
	cout << "Введите число, которое будете возводить в степень " << endl; cin >> num;
	cout << "Введите степень " << endl; cin >> degr;

	for (i = 0; i < degr; i++)
	{
		res *= num;
	}
	cout << "Ответ: " << res << endl;

	// Задание 3
	char symbol = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			//cout << (char)i << " " << (char)j << " " << endl;
			cout << symbol++ << " ";
		}
		cout << endl;
	}
	
}
