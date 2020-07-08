// Ахметова ФФ—105 лаба № 4 вариант 3
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main () {

int h, k, t;

cout <<"Enter hours: " << endl;
cin >> h;

t=h/3;
k=pow(2,t);
cout << k << endl;
   
 return 0;
}

#include <iostream>
#include<conio.h>
using namespace std;

 int main () {
     
 int N, i, res;
 
 cin >> N;
 res =1;
 for (i=1; i <= 2*N; i+2){
     res= res*i;
 }
 cout << res<< endl;
 getch();

return 0;
}
