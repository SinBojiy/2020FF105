#include<iostream>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "ru");
	cout << "Введите число";
	cin >> a;
	switch (a)
	{
	 case 1:cout << "Февраль"; break;
	 case 2:cout << "Март"; break;
	 case 3:cout << "Апрель"; break;
	 case 4:cout << "Май"; break;
	 case 5:cout << "Июнь"; break;
	 case 6:cout << "Июль"; break;
	 case 7:cout << "Август"; break;
	 case 8:cout << "Сентябрь"; break;
	 case 9:cout << "Октябрь"; break;
	 case 10:cout << "Ноябрь"; break;
	 case 11:cout << "Декабрь"; break;
	 case 12:cout << "Январь"; break;
	}
	
}