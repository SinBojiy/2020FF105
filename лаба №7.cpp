// Ахметова ФФ—105 лаба №7 вариант 3

#include <conio.h>
#include <iostream>

using namespace std;
 
//сначала идет задание 2,а потом 1,а 3 так и не получилось сделать
int main(int argc, char* argv[])
{
int M,S=1;
int i,m,mas[10];
cout<<"MAS OT 0 DO ";cin>>m;
for(i=0; i<10; i++)
{
mas[i]=rand()%m;
cout<<"Mas["<<i<<"] = "<<mas[i]<<endl;
}
cout<<endl<<"Input M - ";cin>>M;
for(int i=0; i<10; i++)
{
if(mas[i]>M)
{
S=S*mas[i];
cout<<"["<<i<<"] - "<<mas[i]<<endl; 
}
}
if(S==1)
cout<<"null"<<endl;
else
cout<<"* - "<<S<<endl;
getch ();


// Ахметова ФФ—105 лаба №7 вариант 3
 


//int main(){
    //setlocale(LC_ALL,"Russian");
    int n, *arr;
    cout<<"Введите количество чисел \n";
    cin>>n;
    arr = new int [n];
    for(int i=0; i<n; ++i)
    cin>>arr[i];
    if(arr[0]>0)  
    cout<<"Положительное \n";
    else
    cout<<"Отрицательное \n";
    delete [] arr;
    system("pause");     
    return 0;
}
