// 5.2.cpp 

#include <iostream>
#include <vector>
#include <cmath>
int main() 
{
    int num;
    std::cout << "enter the num: ";
    std::cin >> num;
    std::vector <int> Num;
    while (num > 0) {
        Num.push_back(num % 10);
        num /= 10;
    }
    for (int i = 0; i < Num.size(); i++)
        if (Num[i] == 1)
            Num.erase(Num.begin() + i);
    for (int i = 0; i < Num.size(); i++)
        num += Num[i] * pow(10, i);
    std::cout << num;
}
