#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
#define PI 3.14159   //����һ����ȫ��д��ĸ��ʾ������=�����ã�

int main(void){
    const int MONTHS = 12;  //���峣��
    printf("Hello,world!\n");
    printf("1+1=%d\n",1+1); 
    int a,b;
    printf("��������������\n");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    float weight;
    printf("�������Ϊ��");
    scanf("%f",&weight);
    printf("��ļ�ֵΪ��%f\n",1700.0*14.5833*weight);
    printf("��ļ�ֵΪ��%.2f\n",1700.0*14.5833*weight); //������λС��
    int x=100;
    printf("dex=%d ; octal=%o ; hex=%x\n",x,x,x); //�ֱ������εİ˽��ƺ�ʮ�����Ʊ�ʾ
    printf("dex=%d ; octal=%#o ; hex=%#x\n",x,x,x); //��#�Ż�ʹ����˽���ǰ����0��ʮ������ǰ����0x
    //������ӡת��˵��
    //unsigned int : %u
    //long : %ld        long(�˽���) : %lo       long(ʮ������) : %lx      unsigned long : %lu
    //short : %hd       short(�˽���) : %ho      unsigned short : %hu
    //long long : %lld(�з�������)     %llu(�޷�������)
    //�ַ� char����
    char grade1 = 'A';
    char grade2 = 66;
    char ch;
    printf("������ch:\n");
    scanf(" %c",&ch); //%cǰ��ǵüӿո񣬲�Ȼ�޷����룬��Ϊ�������������з����ܻᱻ%c��ȡ
    printf("The grade1 is %c\n",grade1);    
    printf("The grade2 is %c\n",grade2);
    printf("The code of %c is %d\n",ch,ch); //%dת�����ַ���Ϊ��ASCII��
    //sizeof�ؼ���    ת��˵����%zd
    printf("Type int has a size of %u bytes.\n",(unsigned int)sizeof(int));
    //printf("Type int has a size of %zd bytes.\n",sizeof(int));  ����д����������������ǻ���ֻ�ɫ��ʾ��
    printf("Type char has a size of %u bytes.\n",(unsigned int)sizeof(char));
    printf("Type float has a size of %u bytes.\n",(unsigned int)sizeof(float));
    printf("Type double has a size of %u bytes.\n",(unsigned int)sizeof(double));
    printf("Type long has a size of %u bytes.\n",(unsigned int)sizeof(long));
    //�ַ���
    char name[40]; //char���������Ԫ�ظ���Ӧ����Ҫ�����Ԫ�ظ������ٶ�1����Ϊ����һ��λ�ø����ַ�
    printf("������������֣�");
    scanf("%s",name); //ע�⣺����Ҫ&
    //scanf����%s��ȡ�ַ���ʱ��������һ���ո�ͻ�ֹͣ������ֻ�ܶ�ȡ��һ�����ʣ�������һ��������
    printf("Hello,%s.%s\n",name,PRAISE);
    printf("The name of %u letters occupies %u memory cells.\n",(unsigned int)strlen(name),(unsigned int)sizeof name);
    //strlen�����ܵó��ַ����ĳ��ȣ������ո�ͱ�㣩       sizeof����������Ŀռ�ʱ�����ü�����

    return 0;
}