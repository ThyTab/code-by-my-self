#include <bits/stdc++.h>
using namespace std;

string multip(string a,string b){
    int x[10001],y[10001],mul[20002];  //存储两个因数与积
    int len_a=a.size();
    int len_b=b.size();  //获取长度
    for(int i=0;i<len_a;i++){
        x[i]=a[len_a-i-1]-'0';
    }
    for(int i=0;i<len_b;i++){
        y[i]=b[len_b-i-1]-'0';
    }     //倒序存储大数
    //乘法核心步骤
    for(int i=0;i<len_a;i++){
        for(int j=0;j<len_b;j++){
            mul[i+j]+=x[i]*y[j];
        }
    }
    //进位
    for(int i=0;i<len_a+len_b-1;i++){
        mul[i+1]+=mul[i]/10;
        mul[i]=mul[i]%10;
    }
    //将结果存于字符串中并返回
    string ans;
    int len=0;
    int k=0;
    while(k<len_a+len_b){
        if(mul[len_a+len_b-1-k]!=0){
            len=len_a+len_b-1-k+1;
            break;
        }
        k++;
    }
    if(len!=0){
        for(int i=0;i<len;i++){
        ans.push_back(mul[len-i-1]+'0');
    }
    }else{
        ans="0";
    }

    return ans;
}

int main(){

    string a,b;
    cin>>a;
    cin>>b;
    string ans = multip(a,b);
    cout<<ans<<endl;


    system("pause");
    return 0;
}