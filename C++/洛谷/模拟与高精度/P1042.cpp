#include <bits/stdc++.h>
using namespace std;

int main(){

    string str[]={};
    int len[]={};
    int i=0;
    while(true){
        cin>>str[i];
        len[i]=str[i].size();
        if(str[i][len[i]-1]=='E'){
            break;
        }
        i++;
    }   //str中有i+1个元素

    int a=0,b=0;
    for(int j=0;j<i+1;j++){
        for(int k=0;k<len[j];k++){
            if(str[j][k]=='W'){
                a+=1;
            }else if(str[j][k]=='L'){
                b+=1;
            }
            if(a==11 || b==11){
                cout<<a<<":"<<b<<endl;
                a=0;
                b=0;
            }
        }
    }
    if(a!=0 || b!=0){
        cout<<a<<":"<<b<<endl;
    }


    system("pause");
    return 0;
}