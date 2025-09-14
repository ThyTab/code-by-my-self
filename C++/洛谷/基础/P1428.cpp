#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    int score;
    int i=0;
    while(cin>>score){
        arr[i]=score;
        if(i==(n-1)){
            break;
        }
        i++;
    }
    for(int j=0;j<n;j++){
        int num=0;
        for(int k=0;k<j;k++){
            if(arr[k]<arr[j]){
                num++;
            }
        }
        cout<<num<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}