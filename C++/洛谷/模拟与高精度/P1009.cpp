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

string multip(string a,string b){
    int x[10001],y[10001],mul[20002]={};  //存储两个因数与积  数组一定要初始化（即使未初始化的时候默认全零）
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

string fac(string n){
    string s="1";
    int num=stoi(n);
    for(int i=1;i<=num;i++){
        s=multip(s,to_string(i));
    }
    return s;
}

int main(void)
{
    int n;
    cin>>n;
    string ans="0";
    for(int i=1;i<=n;i++){
        ans=add(ans,fac(to_string(i)));
    }
    cout<<ans<<endl;

	return 0;
}
