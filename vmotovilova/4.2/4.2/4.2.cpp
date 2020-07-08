// 4.2

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int n, x;
    double S = 0;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        S += cos(pow(x,i));
    }
    cout << S;
    return 0;
}

