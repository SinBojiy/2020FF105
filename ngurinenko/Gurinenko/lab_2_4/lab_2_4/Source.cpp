#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	const double PI = 3.141592653589793;
	double x,y;
	setlocale(LC_ALL, "ru");
	cout << "¬ведите x";
	cin >> x;

	if (0 <= x <= 1)
	{
		y = pow(x, 2) - x;
	}
	if (x > 1 || x < 0)
	{
		y = pow(x, 2) - sin(PI * x * x);
	}
	cout << "F(" << x << ")" << " = " << y;
	
}