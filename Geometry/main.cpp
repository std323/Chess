#include<iostream>
using namespace std;
//#define SQUARE
//#define TRINAGLE_1
//#define TRINAGLE_2
//#define TRINAGLE_3
//#define TRINAGLE_4
//#define SQUARE_1
//#define CHESS_BOARD
//#define RHOMB
//#define CHESS_BOARD_1
//#define CHESS_BOARD_1_1
//#define RHOMB_1


void main()
{
	setlocale(LC_ALL, "");
	//int n; //Количество итераций
	//cout << "Введите количество итераций: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;

	}
#endif // SQUARE

#ifdef TRINAGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINAGLE_1


#ifdef TRINAGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRINAGLE_2

#ifdef TRINAGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRINAGLE_3

#ifdef TRINAGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRINAGLE_4

#ifdef SQUARE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if (i%2==j%2)
			//if ((i+j) % 2 == 0)cout << "+ "; else cout << "- ";
			//(i+j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
#endif // SQUARE_1

#ifdef CHESS_BOARD
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << (i % 2 == j % 2 ? char(127) : char(254));
				
		}
		cout << endl
;
	}
#endif // CHESS_BOARD

#ifdef RHOMB
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			if (j == 10 / 2 + i || j == 9 / 2 - i || j == i - 10 / 2 || j == 10 - i + 10 / 2 - 1)
				cout << "/";

			else
			{
				cout << " ";

			}

		
		}
		cout << endl;
	}
#endif // RHOMB
	
#ifdef CHESS_BOARD_1
	int n;
	cout << "Введите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int jj = 0; jj < n; jj++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int ii = 0; ii < n; ii++)
				{
					cout << (i % 2 == j % 2 ? "* " : "  ");
				}
			}
			cout << '\n';
		}

	}
	cout << '\n\n\n';
#endif // CHESS_BOARD_1

#ifdef CHESS_BOARD_1_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // CHESS_BOARD_1_1

	
#ifdef RHOMB_1
	int n = 0;
	cout << "Введите число: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)

			cout << " ";
		cout << "\\";

		for (int j = 0; j < (n - i - 1) * 2; j++)

			cout << " ";
		cout << "/";
		cout << endl;
#endif // RHOMB_1
			
		
	}


				





