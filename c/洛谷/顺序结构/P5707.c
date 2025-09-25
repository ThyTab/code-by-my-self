#include <stdio.h>
int main(){
    int s,v;
    scanf("%d %d",&s,&v);
    int t = 10 + (s%v==0?s/v:s/v+1);   //计算所需的总时间
    int hours,minutes;
    if(t<=480){
        hours = t/60;
        minutes = t%60;
        if(minutes == 0){
            printf("0%d:00\n",8-hours);
        }
        else{
            printf("0%d:",8-1-hours);
            if((60-minutes)>=10){
                printf("%d",60-minutes);
            }else{
                printf("0%d",60-minutes);
            }
        }
    }
    else{
        t -= 480;
        hours = t/60;
        minutes = t%60;
        if(t<=840){
            if(minutes == 0){
                printf("%d:00\n",24-hours);
            }
            else{
                printf("%d:",24-1-hours);
                if((60-minutes)>=10){
                   printf("%d",60-minutes);
                }else{
                    printf("0%d",60-minutes);
                }
            }
        }else{
            if(minutes == 0){
                printf("0%d:00\n",24-hours);
            }
            else{
                printf("0%d:",24-1-hours);
                if((60-minutes)>=10){
                   printf("%d",60-minutes);
                }else{
                    printf("0%d",60-minutes);
                }
            }
        }
    }
    
    
    return 0;
}