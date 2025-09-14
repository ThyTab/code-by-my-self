#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
#define PI 3.14159   //常量一般用全大写字母表示，不用=，不用；

int main(void){
    const int MONTHS = 12;  //定义常量
    printf("Hello,world!\n");
    printf("1+1=%d\n",1+1); 
    int a,b;
    printf("请输入两个整数\n");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    float weight;
    printf("你的体重为：");
    scanf("%f",&weight);
    printf("你的价值为：%f\n",1700.0*14.5833*weight);
    printf("你的价值为：%.2f\n",1700.0*14.5833*weight); //保留两位小数
    int x=100;
    printf("dex=%d ; octal=%o ; hex=%x\n",x,x,x); //分别是整形的八进制和十六进制表示
    printf("dex=%d ; octal=%#o ; hex=%#x\n",x,x,x); //加#号会使输出八进制前面有0，十六进制前面有0x
    //其他打印转换说明
    //unsigned int : %u
    //long : %ld        long(八进制) : %lo       long(十六进制) : %lx      unsigned long : %lu
    //short : %hd       short(八进制) : %ho      unsigned short : %hu
    //long long : %lld(有符号类型)     %llu(无符号类型)
    //字符 char类型
    char grade1 = 'A';
    char grade2 = 66;
    char ch;
    printf("请输入ch:\n");
    scanf(" %c",&ch); //%c前面记得加空格，不然无法输入，因为缓冲区残留换行符可能会被%c读取
    printf("The grade1 is %c\n",grade1);    
    printf("The grade2 is %c\n",grade2);
    printf("The code of %c is %d\n",ch,ch); //%d转换的字符型为其ASCII码
    //sizeof关键字    转换说明：%zd
    printf("Type int has a size of %u bytes.\n",(unsigned int)sizeof(int));
    //printf("Type int has a size of %zd bytes.\n",sizeof(int));  这种写法能正常输出，但是会出现黄色提示线
    printf("Type char has a size of %u bytes.\n",(unsigned int)sizeof(char));
    printf("Type float has a size of %u bytes.\n",(unsigned int)sizeof(float));
    printf("Type double has a size of %u bytes.\n",(unsigned int)sizeof(double));
    printf("Type long has a size of %u bytes.\n",(unsigned int)sizeof(long));
    //字符串
    char name[40]; //char类型数组的元素个数应比所要填入的元素个数至少多1，因为需留一个位置给空字符
    printf("请输入你的名字：");
    scanf("%s",name); //注意：不需要&
    //scanf函数%s读取字符串时，遇到第一个空格就会停止，即其只能读取第一个单词，而不是一整个句子
    printf("Hello,%s.%s\n",name,PRAISE);
    printf("The name of %u letters occupies %u memory cells.\n",(unsigned int)strlen(name),(unsigned int)sizeof name);
    //strlen函数能得出字符串的长度（包括空格和标点）       sizeof函数求变量的空间时，不用加括号

    return 0;
}