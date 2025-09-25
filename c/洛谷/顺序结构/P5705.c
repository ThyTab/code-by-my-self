#include <stdio.h>
int main(){
    char a[5];
    scanf("%s",a);
    for(int i=0;i<5;i++){
        printf("%c",a[4-i]);
    }
    printf("\n");

    return 0;
}