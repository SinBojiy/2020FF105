#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double a,b,c;
	cout << "Введите значение a b c ";
	cin >> a >> b >> c;
	if ((int)a == a)
	{
		cout << " a - целое  ";
	}
	else
		cout << " a - не целое  ";
	if ((int)b == b)
	{
		cout << " b - целое  ";
	}
	else
		cout << " b - не целое  ";
	if ((int)c == c)
	{
		cout << " c - целое ";
	}
	else
		cout << " c - не целое  ";
}
