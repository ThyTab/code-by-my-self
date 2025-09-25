#include <stdio.h>

void CountingSort(int vote[] ,int n , int len){
    int account[1000]={0};   //初始化，一定不要忘
    for(int i=0;i<len;i++){
        account[vote[i]]++;
    }
    int k=0;
    for(int i=1;i<n+1;i++){
        for(int j=0;j<account[i];j++){
            vote[k+j] = i;
        }
        k += account[i];
    }
    for(int i=0;i<len;i++){
        printf("%d ",vote[i]);
    }
    printf("\n");
}

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int vote[m];
    for(int i=0;i<m;i++){
        scanf("%d",&vote[i]);
    }
    CountingSort(vote,n,m);

    return 0;
}