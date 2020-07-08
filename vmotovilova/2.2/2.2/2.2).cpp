// 2.2
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c, s, d, n, o;

    std::cout << "Введите цену товаров: ";
    std:: cin >> a>> b>> c;

    s = a + b + c;

    std::cout << "Внесенная сумма: ";
    std::cin >> d;

    if (d < s)

    {
        n = s - d;
        std::cout << "Не хватает:" << n;
    }
    
    else 
    {
        if (d > s)

            o = d - s;
        std::cout << "Заберите сдачу" << o;

        else

            std::cout << "Спасибо за покупку!";
        
    }
        
        return 0;
    
}

