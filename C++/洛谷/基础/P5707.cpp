#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int s,v;
    cin>>s>>v;
    int sum_min=10+ceil(1.0*s/v);
    if(sum_min<480){
        int a=sum_min%60;
        int b=(sum_min-a)/60;
        if(a==0){
            cout<<"0"<<8-b<<":00"<<endl;
        }
        else if(a<=50){
            cout<<"0"<<7-b<<":"<<60-a<<endl;
        }
        else{
            cout<<"0"<<7-b<<":"<<"0"<<60-a<<endl;
        }
    }
    else if(sum_min==480){
        cout<<"00:00"<<endl;
    }
    else{
        sum_min-=480;
        int a=sum_min%60;
        int b=(sum_min-a)/60;
        if(sum_min<840){
            if(a==0){
            cout<<24-b<<":00"<<endl;
        }
        else if(a<=50){
            cout<<23-b<<":"<<60-a<<endl;
        }
        else{
            cout<<23-b<<":"<<"0"<<60-a<<endl;
        }
        }
        else if(sum_min==840){
            cout<<"10:00"<<endl;
        }
        else{
            if(a==0){
            cout<<"0"<<24-b<<":00"<<endl;
        }
        else if(a<=50){
            cout<<"0"<<23-b<<":"<<60-a<<endl;
        }
        else{
            cout<<"0"<<23-b<<":"<<"0"<<60-a<<endl;
        }
        }
        
    }

    system("pause");
    return 0;
}