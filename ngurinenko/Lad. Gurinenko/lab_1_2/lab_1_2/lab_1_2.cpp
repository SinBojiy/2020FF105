#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a, h,s,r,R;
	cout << "Введите значение сторону равностороннего треугольника ";
	cin >> a;
	r = sqrt(3) * a / 6;
	R = 2 * r;
	h = 3 * r;
	s = (a * h) / 2;
	cout << "Радиус вписаной " << r << " Радиус описанной " << R << " Высота " << h << " Площадь " << s;
	
}