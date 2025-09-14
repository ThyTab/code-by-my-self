#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    int arr[3]={a,b,c};
    sort(arr,arr+3);
    int Gcd=__gcd(arr[0],arr[2]);
    cout<<arr[0]/Gcd<<"/"<<arr[2]/Gcd<<endl;

    system("pause");
    return 0;
}