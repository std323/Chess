#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	// ������� 1

	int i = 1, fact = 1, n;
	cout << "������� �����: " << endl; cin >> n;

	while (i <= n)
	{
		fact *= i++;

	}
	cout << "��������� ����� " << n << "=" << fact << endl;;

	

	// ������� 2

	int num, degr, res=1;
	cout << "������� �����, ������� ������ ��������� � ������� " << endl; cin >> num;
	cout << "������� ������� " << endl; cin >> degr;

	for (i = 0; i < degr; i++)
	{
		res *= num;
	}
	cout << "�����: " << res << endl;

	// ������� 3
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
