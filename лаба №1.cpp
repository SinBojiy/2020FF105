// Ахметова ФФ—105 лаба № 1
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    
    int X, Y, result, r;
    float pi, length, area, x, y, p, t, x_1, y_1;
    pi = 3.14;
    bool there = true;
    
    cout << " Enter X: " << endl;
    cin >> X;
    cout << " Enter Y: " << endl;
    cin >> Y;
    result = ((sin(X)+cos(Y))/(cos(X)-sin(Y)))*tan(X*Y);
    cout << "Result is " << result << endl;
    
    cout << " Enter r:" << endl;
    cin >> r;
    length = 2*pi*r;
    cout << "Lenghth is "<< length << endl;
    area = pi*r*r;
    cout << "Area is " << area << endl;
    
    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;
    cout << "Enter p: " << endl;
    cin >> p;
    cout << "Enter t: " << endl;
    cin >> t;
    
    if (x>=t && x<=p) {
        cout << "Point belongs" << endl;
    } else if (x < t) {
        cout << "Point not belongs" << endl;
    } else if (x >p) {
        cout << "Point not belongs" << endl;
    }
    
    cout << "Enter x_1: " << endl;
    cin >> x_1;
    cout << "Enter y_1: " << endl;
    cin >> y_1;

   if ((x_1 >=-2 && x_1 <=2) && (y_1 >=-3 && y_1<=4)) {
      if (there)
    cout << "True" << endl;}    
      
  if ((x_1 >= -4 && x_1 < -2) && (y_1 >= -3 && y_1 <=0)) {
  if (there)
  cout << "True" << endl; }
    
    if ((x_1 > 2 && x_1 <=5) && (y_1 >= -3 && y_1 <= 0)) {
        if (there)
    cout << "True" << endl;}
    
 if  (((x_1 <-2)||(x_1 >2)) && ((y_1 <-3)||(y_1 >4))) {
    cout << "False" << endl;}
    
    return 0;
}

