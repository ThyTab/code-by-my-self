#include <bits/stdc++.h>
using namespace std;
int main(){

    int l,m;
    int ans=0;
    cin>>l>>m;
    int tree[l+1];
    for(int i=0;i<=l;i++){
        tree[i]=0;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            tree[j]=1;
        }
    }
    for(int i=0;i<=l;i++){
        if(tree[i]==0){
            ans++;
        }
    }
    cout<<ans<<endl;

    system("pause");
    return 0;
}

