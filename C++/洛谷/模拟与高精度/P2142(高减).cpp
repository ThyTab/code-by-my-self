#include <bits/stdc++.h>
using namespace std;

string sub(string a,string b){
    int x[100001],y[100001],sub[100001];  //存储两个被减数、减数与差
    int len_a=a.size();
    int len_b=b.size();  //获取长度
    bool bigger;
    if(len_a>len_b){
        bigger=true;
    }else if(len_a==len_b){
        int i=0;
        bigger=true;
        while(i<len_a){
            if(a[i]>b[i]){
                bigger=true;
                break;
            }else if(a[i]<b[i]){
                bigger=false; 
                break;
            }
            i++;
        }
    }else{
        bigger=false;
    }    //判断两个字符串代表的大数的大小
    if(bigger){
        for(int i=0;i<len_a;i++){
        x[i]=a[len_a-i-1]-'0';
    }
    for(int i=0;i<len_b;i++){
        y[i]=b[len_b-i-1]-'0';
    }     
    }else{
        for(int i=0;i<len_a;i++){
        y[i]=a[len_a-i-1]-'0';
    }
    for(int i=0;i<len_b;i++){
        x[i]=b[len_b-i-1]-'0';
    }     
    }   //判断大小后，将更大的数填入被减数x里，将较小数填入减数y里
    int len=max(len_a,len_b);
    for(int i=0;i<len;i++){
        sub[i]=x[i]-y[i];
    }     //位数对齐相减
    for(int i=0;i<len;i++){
        if(sub[i]<0){
            sub[i]+=10;
            sub[i+1]-=1;
        }
    }     //借位操作
    string ans;
    int len_sub=1;
    int j=len-1;
    while(j>0){
        if(sub[j]!=0){
            len_sub=j+1;
            break;
        }
        j--;
    }
    for(int i=0;i<len_sub;i++){
        ans.push_back('0'+sub[len_sub-i-1]);
    } 
    return bigger?ans:'-'+ans;
}

int main(){

    string a,b;
    cin>>a;
    cin>>b;
    string ans = sub(a,b);
    cout<<ans<<endl;

    system("pause");
    return 0;
}