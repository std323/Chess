#include<iostream>
using namespace std;

//#define FOR_BASICS
//#define PYTHAGORAS
//#define MULTIPLIC_TABLE
//#define FIGURE
#define FIGURE_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n; // Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		//cout << "Hello FOR" << endl;
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

	// Задание 7

#ifdef MULTIPLIC_TABLE
	cout << "\t\t\tТаблица умножения\n " << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
			cout << i << "*" << j << "=" << i * j << endl;
	}
#endif // MULTIPLIC_TABLE


	// Задание 8

#ifdef PYTHAGORAS
	cout << "\t\t\tТаблица Пифагора\n\n " << endl;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << "\n\n";
	}
#endif // PYTHAGORAS

	// Фигуры
	// 0)

#ifdef FIGURE
	cout << "0)\n" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// 1)

	cout << "1)\n" << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	// 2)

	cout << "2)\n" << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	// 3)

	cout << "3)\n" << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}


	// 4)

	cout << "4)\n" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	// 5)

	cout << "5)\n" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i + j == 4)
			{
				cout << "/";
			}

			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
#endif // FIGURE

	
}


