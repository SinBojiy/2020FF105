// Ахметова ФФ—105 лаба №9 вариант 3


#include <iostream>
 
using namespace std;
 
int main()
{
    int r=0,k=0,t=0;
    char ch[16];
    cin>>ch;
    for(int i = 0; ch[i]; i++)
    {
        switch(ch[i])
        {
        case 'r':r++;break;
        case 'k':k++;break;
        case 't':t++;
        }
    }
    cout << "t " << t << endl;
    cout << "k " << k << endl;
    cout << "r " << r << endl;
    return 0;
}
