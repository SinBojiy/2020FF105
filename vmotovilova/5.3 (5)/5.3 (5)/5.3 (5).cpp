// 5.3 (5)

#include <iostream>

using namespace std;

int main()
{
    long n;
    int i, j;
    int s[10] = { 0 };
    cin >> n;
    while (n > 0) 
    {
        i = n % 10;
        s[i]++;
        n = n / 10;
    }

    for (int i = 1; i < 10; i++) {
        if (s[i] > 0) {
            cout << i;
            s[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < s[i]; j++)
            cout << i;
    cout << endl;

   
    return 0;

}