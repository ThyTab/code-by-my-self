#include <iostream>
#include <cstdio>
using namespace std;

int main(){

     double x;
     cin>>x;
     double x_int=10*x;
     int y=x_int;
     int a=y%10;
     int b=((y-a)/10)%10;
     int c=((y-a-b)/100)%10;
     int d=((y-a-b-c)/1000)%10;
    cout<<a+0.1*b+0.01*c+0.001*d<<endl;

    system("pause");
    return 0;

}