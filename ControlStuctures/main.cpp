//ControlStructures
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define TARGET

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef TEMPERATURE
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 60)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 33)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 5)
	{
		cout << "���������" << endl;
	}
	else if (temperature > 0)
	{
		cout << "�������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -40)
	{
		cout << "������� �����" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "������� �����:"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "���� ��������" << endl;
	}
	else // � �������� ������ / �����
	{
		cout << "�� Firefox" << endl;
	}

#endif // TARGET

	double a, b;// ����� �������� �������������
	char s;     // Sign - ���� ��������
	cout << "������� �������������� ���������:"; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
}
