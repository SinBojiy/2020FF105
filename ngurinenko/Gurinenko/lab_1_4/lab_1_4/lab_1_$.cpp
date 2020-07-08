#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x, y;
	cout << "Введите x,y\n";
	cin >> x >> y;
	if ((y >= 0) && (y <= 6 - abs(x)) && (x >= 2))
	{
		double k, m, n;
		int x1 = 0, y1 = 0, x2 = 0, y2 = 4, x3 = 2, y3 = 0;
		k = (x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y);
		m = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
		n = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);
		cout << ((k >= 0 && m >= 0 && n >= 0) || (k <= 0 && m <= 0 && n <= 0) ? "Не Принадлежит" : "Принадлежит");
	}
	else
		cout << "Не принадлежит";
}