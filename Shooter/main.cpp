#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define Enter 13
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77


void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		
		case 'w':case 'W':case UP_ARROW: cout << "������" << endl; break;
		case 's':case 'S':case DOWN_ARROW: cout << "�����" << endl; break;
		case 'a':case 'A':case LEFT_ARROW: cout << "�����" << endl; break;
		case 'd':case 'D':case RIGHT_ARROW: cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����\a" << endl; break;// '\a' - alarm ����� ��������� �������
		case Escape: cout << "�����" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		
		}
	} while (key != Escape);

	}