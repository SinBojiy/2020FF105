#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double a,b,c;
	cout << "������� �������� a b c ";
	cin >> a >> b >> c;
	if ((int)a == a)
	{
		cout << " a - �����  ";
	}
	else
		cout << " a - �� �����  ";
	if ((int)b == b)
	{
		cout << " b - �����  ";
	}
	else
		cout << " b - �� �����  ";
	if ((int)c == c)
	{
		cout << " c - ����� ";
	}
	else
		cout << " c - �� �����  ";
}
