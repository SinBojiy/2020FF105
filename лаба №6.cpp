// Ахметова ФФ—105 лаба №6 вариант 3
#include <iostream>
#include <conio.h>
using namespace std;

 int Binom( int m, int n ){
 if( m < 0 || n < 0 && n < m ) throw std::invalid_argument( "Binom condition failed" );
    if( m == 0 || m == n ) return 1;
    return Binom( m, n-1 ) + Binom( m-1, n-1 );}
int number=0;

int main(){

    int a, b, c, d, n, m;
    cout << "Enter four numbers" << endl;
    cin >> a >> b >> c >> d;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0) {
            cout << "NOD = " << i;
            break;
        }
    }
   
    
      printf("Enter number:");
    scanf("%d",&number);
    printf("Back:");
    while (number>0)
    {
        printf("%d",number % 10);
        number/=10;
    } ;
    getch() ;
    
   
    cout << "Enter n and m" << endl;
    cin >> n>> m;
    std::cout << Binom( m, n ) <<endl;
    system( "pause" );}

    


 

