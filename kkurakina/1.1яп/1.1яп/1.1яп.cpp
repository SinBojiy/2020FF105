#include <iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double x, y, s;
	setlocale(LC_ALL, "Ru");
	cout  <<"Введите значение x и y ";
	cin >> x >> y;
	s = ((1 + sin(sqrt(x + 1))) / (cos(12.0 * y - 4)));
	cout << "Ответ " << s;

}