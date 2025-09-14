#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int max_num = max({a,b,c});
    int min_num = min({a,b,c});
    cout<<min_num<<" ";
    if(a==max_num&&b==min_num){
        cout<<c<<" ";
    }
    else if(b==max_num&&a==min_num){
        cout<<c<<" ";
    }
    else if(a==max_num&&c==min_num){
        cout<<b<<" ";
    }
    else if(c==max_num&&a==min_num){
        cout<<b<<" ";
    }
    else if(b==max_num&&c==min_num){
        cout<<a<<" ";
    }
    else{
        cout<<a<<" ";
    }
    cout<<max_num<<endl;

    system("pause");
    return 0;
}