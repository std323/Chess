#include<iostream>
#include<conio.h>
using namespace std;

//#define PALINDROME
//#define TICKET

void main()
{
	setlocale(LC_ALL, "");

	// ������� 1


	int number;//�����, ��������� � ����������
	int reverse = 0;//�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	int buffer = number;// ����� �����, ���������� � ����������
	int digit;

	do
	{
		digit = number % 10;
		reverse = (reverse * 10) + digit;
		number /= 10;
	} while (number != 0);

	if (buffer == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ��������� " << endl;
	}

		// ������� 2

	int num, i, sum1 = 0, sum2 = 0;
	cout << "������� ����� ������: "; cin >> num;

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
		cout << "����� ���������� " << endl;
	}
	else
	{
		cout << "����� �� ����������" << endl;
	}

	// ������� 3

	enum command { straight, right, left, back, jump, fire };
	int Command;
	
	cout << "������� �������� (w-������, s-�����, a-�����, d-������, space-������, enter-�����): " << endl;// cin >> Command;
	Command = _getch();
	switch (Command)
	{
	case 119: cout << straight << "������ "; break;
	case 100: cout << right << "������ "; break;
	case 97: cout << left << "����� "; break;
	case 115: cout << back << "����� "; break;
	case 32: cout << jump << "������ "; break;
	case 13: cout << fire << "����� "; break;
	}
}

			
	
	
	
	
	