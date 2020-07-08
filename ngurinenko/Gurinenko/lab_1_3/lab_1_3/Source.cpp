#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	bool f;
	double a, b, c, d;
	cout << "¬ведите значение катетов a b c d ";
	cin >> a >> b >> c >> d;
	if (a / b == c / d)
	{
		f = true;
	}
	else
		f = false;
	cout << f;

}