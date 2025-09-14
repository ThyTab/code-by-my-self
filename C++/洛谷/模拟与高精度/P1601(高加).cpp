#include <bits/stdc++.h>
using namespace std;

string add(string a,string b){
    int x[10001],y[10001],sum[10001];  //存储两个加数与和
    int len_a=a.size();
    int len_b=b.size();  //获取长度
    for(int i=0;i<len_a;i++){
        x[i]=a[len_a-i-1]-'0';
    }
    for(int i=0;i<len_b;i++){
        y[i]=b[len_b-i-1]-'0';
    }     //倒序存储大数
    int len=max(len_a,len_b);
    for(int i=0;i<len;i++){
        sum[i]=x[i]+y[i];
    }     //位数对齐相加
    for(int i=0;i<len;i++){
        sum[i+1]+=sum[i]/10;
        sum[i]=sum[i]%10;
    }     //进位
    string ans;
    int len_sum;
    sum[len]!=0?len_sum=len+1:len_sum=len;
    for(int i=0;i<len_sum;i++){
        ans.push_back('0'+sum[len_sum-i-1]);
    }    //将结果存于字符串中并返回
    return ans;
}

int main(){

    string a,b;
    cin>>a;
    cin>>b;
    string sum = add(a,b);
    cout<<sum<<endl;


    system("pause");
    return 0;
}