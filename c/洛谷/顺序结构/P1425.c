#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int t = 60*(c-a)+d-b;
    printf("%d %d",t/60,t%60);
    return 0;
}