#include <bits/stdc++.h> //����ͷ�ļ�
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){

    //����
    double a = sqrt(2); //#include <cmath>
    cout<<a<<endl;
    //����ֵ
    int b = abs(-5); //#include <cmath>
    cout<<b<<endl;
    //��˹ȡ������
    cout<<floor(2.9)<<endl;
    cout<<floor(3.345)<<endl;
    cout<<floor(5.0)<<endl; //���������򲻱�
    cout<<ceil(2.9)<<endl;
    cout<<ceil(3.345)<<endl;
    cout<<ceil(5.0)<<endl; //�����������ɲ���
    //ȡ���ֵ����Сֵ
    int c=10;
    int d=15;
    cout<<max(c,d)<<endl; //#include <algorithm>  �Ƚ�������
    cout<<max({b,c,d})<<endl; //�Ƚ϶�����ֱ���Ҫ������  �ұ�������ͬ��������
    cout<<min({b,c,d})<<endl;
    //sort����  Ĭ����������
    int arr[] = {3,5,1,2,8,6,0}; //#include <algorithm>
    int n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr,arr+n);  //[�׵�ַ��β��ַ)
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //���Լ������С������   #include <numeric>
    int Gcd=__gcd(c,d); //�����»���+gcd(,)     ��ԷǸ�����
    cout<<"Gcd:"<<Gcd<<endl; //���Լ����ֱ�ӵĺ���
    int Lcm=abs(c*d)/Gcd;
    cout<<"Lcm:"<<Lcm<<endl; //��С��������Ҫ������

    //push_back
    string s="Hello";
    s.push_back('!');  //��ĩβ�����ַ�
    cout<<s<<endl;

    //�ַ���ת����  ����ת�ַ���
    string str1 = "12345";
    int num_s1 = stoi(str1);
    cout<<num_s1<<endl;
    int num_s2 = 666;
    string str2 = to_string(num_s2);
    cout<<str2<<endl;

    system("pause");
    return 0;
}