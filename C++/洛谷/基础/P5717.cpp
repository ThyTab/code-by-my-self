#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    int arr[3]={a,b,c};
    sort(arr,arr+3);
    if((arr[0]+arr[1])<=arr[2]){
        cout<<"Not triangle"<<endl;
    }
    else{
        if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]){
        cout<<"Right triangle"<<endl;
    }
        if(arr[0]*arr[0]+arr[1]*arr[1]>arr[2]*arr[2]){
        cout<<"Acute triangle"<<endl;
    }
        if(arr[0]*arr[0]+arr[1]*arr[1]<arr[2]*arr[2]){
        cout<<"Obtuse triangle"<<endl;
    }
        if((arr[0]==arr[1])||(arr[1]==arr[2])){
        cout<<"Isosceles triangle"<<endl;
    }
        if((arr[0]==arr[1])&&(arr[1]==arr[2])){
        cout<<"Equilateral triangle"<<endl;
    }
    }

    system("pause");
    return 0;
}