#include <bits/stdc++.h> //万能头文件
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){

    //开根
    double a = sqrt(2); //#include <cmath>
    cout<<a<<endl;
    //绝对值
    int b = abs(-5); //#include <cmath>
    cout<<b<<endl;
    //高斯取整函数
    cout<<floor(2.9)<<endl;
    cout<<floor(3.345)<<endl;
    cout<<floor(5.0)<<endl; //若是整数则不变
    cout<<ceil(2.9)<<endl;
    cout<<ceil(3.345)<<endl;
    cout<<ceil(5.0)<<endl; //若是整数依旧不变
    //取最大值或最小值
    int c=10;
    int d=15;
    cout<<max(c,d)<<endl; //#include <algorithm>  比较两个数
    cout<<max({b,c,d})<<endl; //比较多个数字必须要大括号  且必须是相同数据类型
    cout<<min({b,c,d})<<endl;
    //sort排序  默认升序排列
    int arr[] = {3,5,1,2,8,6,0}; //#include <algorithm>
    int n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr,arr+n);  //[首地址，尾地址)
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //最大公约数与最小公倍数   #include <numeric>
    int Gcd=__gcd(c,d); //两个下划线+gcd(,)     针对非负整数
    cout<<"Gcd:"<<Gcd<<endl; //最大公约数有直接的函数
    int Lcm=abs(c*d)/Gcd;
    cout<<"Lcm:"<<Lcm<<endl; //最小公倍数需要间接求出

    //push_back
    string s="Hello";
    s.push_back('!');  //在末尾增添字符
    cout<<s<<endl;

    //字符串转整形  整形转字符串
    string str1 = "12345";
    int num_s1 = stoi(str1);
    cout<<num_s1<<endl;
    int num_s2 = 666;
    string str2 = to_string(num_s2);
    cout<<str2<<endl;

    system("pause");
    return 0;
}