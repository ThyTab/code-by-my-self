#include <bits/stdc++.h>
using namespace std;

//����
void printHello(){
    cout<<"Hello,world!"<<endl;
}  //�޲����޷���
int max(int a,int b){
    return a>b?a:b;
}  //�в����з���

//ֵ����
void swap1(int a ,int b)
{
	int temp = a;
	a = b; 
	b = temp;
}
//��ַ����
void swap2(int * p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//ָ��+����+����
void bubbleSort(int * arr, int len){   //����int arr[]   ��Ϊ��ַ���ݣ���ı����飬�β��൱������ָ��
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int * arr , int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//�ṹ��
struct student{
    string name;
    int age;
    int score;
}stu1;    //��һ�ֶ���ṹ������ķ���

//�ṹ��Ƕ�׽ṹ�� 
struct teacher
{
    //��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct student stu; //�ӽṹ�� ѧ��
};

//�ṹ����Ϊ��������
//ֵ����
void printStudent(student stu )
{
	stu.age = 28;
	cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age  << " ������" << stu.score << endl;
}

//��ַ����
void printStudent2(student *stu)
{
	stu->age = 28;
	cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age  << " ������" << stu->score << endl;
}

int main(){

    printHello();
    int max_num=max(5,10);
    cout<<max_num<<endl;
    int a=10;
    //ָ�룺����ͨ��ָ���ӷ����ڴ�
    //�ڴ����Ǵ�0��ʼ��¼�ģ�һ����ʮ���������ֱ�ʾ
    int * p;  //ָ�붨���﷨�� �������� * ������ ;
    p = &a; //ָ�������ֵ��ָ��ָ�����a�ĵ�ַ
    cout << &a << endl; //��ӡ����a�ĵ�ַ
	cout << p << endl;  //��ӡָ�����p
	cout << "*p = " << *p << endl;  //ͨ��*����ָ�����ָ����ڴ�    ������
    //��ͨ������ŵ�������,ָ�������ŵ��ǵ�ַ
    cout << sizeof(p) << endl;  //ָ����ռ���ڴ�
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

    //��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�  ���ڳ�ʼ��ָ�����
    //int * p1=NULL;
    //cout<<*p1<<endl;  //�ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����,���ʿ�ָ�����
    //Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�

    //����ָ����������е�Ԫ��
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int * p2 = arr;  //ָ�������ָ��
    cout<<"��һ��Ԫ�أ�"<<arr[0]<<endl;
    cout << "ָ����ʵ�һ��Ԫ�أ� " << *p2 << endl;
    for(int i=0;i<10;i++){
        cout<<*p2<<" ";
        p2++;  //����ָ���������
    }
    cout<<endl;

    //ָ���뺯��
    //����ָ�������������������޸�ʵ�ε�ֵ
    int b=5,c=10;
    swap1(b,c);  //ֵ���ݲ���ı�ʵ��
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;  //�����b=5 c=10
    swap2(&b,&c);  //��ַ���ݻ�ı�ʵ��
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;  //�����b=10 c=5
    //ֵ���ݶ�ʵ�ε�Ӱ������ں����ڣ�����ַ������ʵ�ڵظı�ʵ��

    //ָ��+����+����
    int arr1[]={5,1,4,9,0,-1,3};
    int len=sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1,len);
    printArray(arr1,len);

    //�ṹ��
    stu1.name = "Peter";
    stu1.age = 17;
    stu1.score = 100;
    struct student stu2 = {"Tom",16,80};  //�ڶ��ֶ���ṹ������ķ���
    struct student stu3;
    stu3.name = "Alice";
    stu3.age = 18;
    stu3.score = 90;  //�����ֶ���ṹ������ķ���
    cout << "������" << stu1.name << " ���䣺" << stu1.age  << " ������" << stu1.score << endl;
    cout << "������" << stu2.name << " ���䣺" << stu2.age  << " ������" << stu2.score << endl;
    cout << "������" << stu3.name << " ���䣺" << stu3.age  << " ������" << stu3.score << endl;

    //�ṹ������
    struct student arr_stu[3]=
	{
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	};
    for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr_stu[i].name << " ���䣺" << arr_stu[i].age << " ������" << arr_stu[i].score << endl;
	}

    //�ṹ��ָ��
    //�ṹ��ָ�����ͨ�� -> ������ �����ʽṹ���еĳ�Ա
    struct student * p_stu = &stu1;
    p_stu->score = 120;
    cout << "������" << stu1.name << " ���䣺" << stu1.age  << " ������" << stu1.score << endl;

    //�ṹ��Ƕ�׽ṹ��
    struct teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;
    t1.stu.name = "����";  //Ƕ�׵�����
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;
	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;

    //�ṹ����Ϊ��������
    printStudent(stu2);
    printStudent2(&stu2);

    system("pause");
    return 0;
}