#include <bits/stdc++.h>
using namespace std;

int main(){

    string ISBN;
    cin>>ISBN;
    int arr[9];
    arr[0]=ISBN[0]-'0';
    arr[1]=ISBN[2]-'0';
    arr[2]=ISBN[3]-'0';
    arr[3]=ISBN[4]-'0';
    arr[4]=ISBN[6]-'0';
    arr[5]=ISBN[7]-'0';
    arr[6]=ISBN[8]-'0';
    arr[7]=ISBN[9]-'0';
    arr[8]=ISBN[10]-'0';
    int n=ISBN[12]-'0';
    int _num=0;
    for(int i=0;i<9;i++){
        _num+=arr[i]*(i+1);
    }
    int num=_num%11;
    if(num!=10){
        if(n==num){
        cout<<"Right"<<endl;
    }
    else{
        for(int i=0;i<12;i++){
            cout<<ISBN[i];
        }
        cout<<num<<endl;
    }
    }
    else{
        if(ISBN[12]=='X'){
        cout<<"Right"<<endl;
    }
    else{
        for(int i=0;i<12;i++){
            cout<<ISBN[i];
        }
        cout<<"X"<<endl;
    }
    }

    system("pause");
    return 0;
}