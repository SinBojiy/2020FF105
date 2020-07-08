#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y;
	cout << "¬ведите значение x ";
	cin >> x;
	y = (log(abs(cos(x)))) / log(1 + pow(x, 2));
	cout << y;
}