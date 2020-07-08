// 7.1

#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    const int N = 9; //Число элементов массива
    int arr[N];//Сам массив
    int occ[N];//Массив, хранящий позиции вхождений
    int s = 0;

    for (int i = 0; i < N; ++i)
    {
        do
        {
            cout << "Введите элемент №" << i + 1 << ": ";
            cin >> arr[i];
        } 
        
        while ((arr[i] > 9) || (arr[i] < 0));
    }

    for (int i = 0; i < N - 2; ++i)
        if ((arr[i] == 1) && (arr[i + 1] == 2) && (arr[i + 2] == 3))
        {
            occ[s] = i;
            ++s;
        }

    if (s == 0)
        cout << "Вхождений не найдено" << endl;
    else
    {
        cout << "Найдено " << s << " вхождений:" << endl;
        for (int i = 0; i < s; ++i)
            cout << occ[i] << endl;
    }

    system("pause");
    return 0;
}
