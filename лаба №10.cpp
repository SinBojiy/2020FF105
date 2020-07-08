// Ахметова ФФ—105 лаба №10 вариант 3


#include <iostream>
 using namespace std;

 
unsigned long long myPow (int base, int exp);
 
 
int main()
{
    cout << "Enter the base: ";
    int base;
    cin >> base;
 
    cout << "Enter the power for your base: ";
    int exp;
    cin >> exp;
    cout << base << " ^ " << exp << " = " << myPow (base, exp)<< "\n";
 
    return 0;
}
 
unsigned long long myPow (int base, int exp)
{
    unsigned long long result {1};
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
 
    return result;
}