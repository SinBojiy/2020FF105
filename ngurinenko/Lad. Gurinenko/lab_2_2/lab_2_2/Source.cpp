#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c,p,s;
	cout << "Введите значение a b c ";
	cin >> a >> b >> c;
	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Площадь " << s;
	}
	else
		cout << "Треугольник не существует";
}