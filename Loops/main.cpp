//Loops 
#include<iostream>
#include<conio.h>
using namespace std;
#define Escape 27
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
# ifdef WHILE
	int i = 0; //������� �����
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i++ < n)
	{
		cout << i << " Hello loops" << endl;

	}
#endif WHILE

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;

#endif // WHILE_2

	char key; //��� ���������� ����� ������� ��� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);


}
