// Ахметова ФФ—105 лаба №8 вариант 3
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0,"");
    int  n, k;  // к - размер матрицы
    cout << "Enter n"<< endl;
    cin >> n;
    vector<vector<int>> matrix(n);
    
    for(size_t i = 0; i < n; ++i)
        for(size_t j = 0; j < n; ++j)
            matrix.at(i).push_back(i == j ? n - i : 0);
 
    for(size_t i = 0; i < n; ++i)
    {
        for(size_t j = 0; j < n; ++j)
            cout << setw(8) << left << matrix.at(i).at(j);
        cout << '\n';
    }
    

     cout << "Enter k" << endl;
   cin >> k;
    int mas[k][k];
  
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            mas[i][j]=rand()%20-10;
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }
    int max=mas[0][0];
    int l;
    for(int i=0;i<k;i++)
    {
        int j=i;
        if(mas[i][j]>max)
        {
            max=mas[i][j];
            l=i;
        }
    }
    cout << "максимальное число главной диагонали = " << max << endl;
    int m;
    cout << "c какой строкой поменять строку " << l+1 << "  =>";
    cin >> m;
    for(int i=0;i<=l;i++)
    {
        if(i==l)
        {
            for(int j=0;j<k;j++)
            {
                swap(mas[l][j],mas[m-1][j]);
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
}
