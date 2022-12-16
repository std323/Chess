#include<iostream>
#include<conio.h>
using namespace std;

//#define PALINDROME
//#define TICKET

void main()
{
	setlocale(LC_ALL, "");

	// Задание 1


	int number;//Число, введенное с клавиатуры
	int reverse = 0;//Число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number;// Копия числа, введенного с клавиатуры
	int digit;

	do
	{
		digit = number % 10;
		reverse = (reverse * 10) + digit;
		number /= 10;
	} while (number != 0);

	if (buffer == reverse)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число не палиндром " << endl;
	}

		// Задание 2

	int num, i, sum1 = 0, sum2 = 0;
	cout << "Введите номер билета: "; cin >> num;

	for (i = 0; i < 3; i++)
	{
		sum1 += num % 10;
		num /= 10;
	}
	for (i = 0; i < 3; i++)
	{
		sum2 += num % 10;
		num /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "Билет счастливый " << endl;
	}
	else
	{
		cout << "Билет не счастливый" << endl;
	}

	// Задание 3

	enum command { straight, right, left, back, jump, fire };
	int Command;
	
	cout << "Введите действие (w-вперед, s-назад, a-влево, d-вправо, space-прыжок, enter-огонь): " << endl;// cin >> Command;
	Command = _getch();
	switch (Command)
	{
	case 119: cout << straight << "Вперед "; break;
	case 100: cout << right << "Вправо "; break;
	case 97: cout << left << "Влево "; break;
	case 115: cout << back << "Назад "; break;
	case 32: cout << jump << "Прыжок "; break;
	case 13: cout << fire << "Огонь "; break;
	}
}

			
	
	
	
	
	