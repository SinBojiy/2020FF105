// Ахметова ФФ—105 лаба № 2 вариант 3
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main () {
   
    float m, n, sum, a, b, c, d, min_1, min_2, max, A1, B1, C1, A2, B2, C2, res, angle, O, F;
    int x; 
  
  cout << "Enter m: " << endl;
  cin >> m;
  cout << "Enter n: " << endl;
  cin >> n;
  
  sum = m + n;
  if (sum >= 180) {
      cout << "There is no such triangle" << endl;}
  if (sum < 180) {
      cout << "It is triangle" << endl;}
  if (m == 90 || n == 90 || sum == 90 ) {
          cout << "Right triangle" << endl; }
  if (m != 90 && n != 90 && sum != 90) {
      cout << "Not right triangle" << endl;}
      
      cout << "Enter a, b, c, d : " << endl;
 cin >> a >> b >> c >> d;
 
 if (a <= b) min_1 = a ;
 else if (a > b) min_1 = b;
 cout << "min_1 = " << min_1 << endl;
 
 if (c <= d) min_2 = c;
 else if (c > d) min_2 = d;
 cout << "min_2 = " << min_2 << endl;
 
 if (min_1 <= min_2) max = min_2;
 else if (min_1 > min_2) max = min_1;
 cout << "max = " << max << endl;
 
 cout << "Enter A1, B1, C1, A2, B2, C2: " << endl;
 cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
 
 res = A1*A2 + B1*B2 + C1;
 if (res == 0) {
     cout << "Lines perpendicular" << endl;}
 if (res != 0) {     
 angle = (A1*A2+B1*B2)/(sqrt(pow(A1,2)+pow(B1,2))*sqrt(pow(A2,2)+pow(B2,2)));
   O = acos(angle);
   cout << "Angle is "<< O << endl; }
   
   
   cout << "Enter x:  " << endl;
cin >>  x;

if (x <= -3) F = 9;
if (x > -3) 
    F = 1/(pow(x,2) + 1);

 cout << "F(x)= " << F << endl;
   
    return 0;
}

