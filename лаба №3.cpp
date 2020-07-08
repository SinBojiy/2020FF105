// Ахметова ФФ—105 лаба № 3 вариант 3
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main () {

int m, n;


cout << "Enter year and month: " << endl;
cin >> m >> n;

if (n == 1 || n==3 ||n== 5 ||n==7 ||n== 8||n== 10 ||n==12){
cout << "31 days" << endl;}
if (n == 4||n== 6||n== 9||n== 11){
    cout << "30 days" << endl;}
if (n==2 && m%4==0) {
    cout << "29 days" << endl;}
if (n==2 && m%4!=0) {
   cout << "28 days" << endl;}
   
 return 0;
}
