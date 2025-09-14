#include <bits/stdc++.h>
using namespace std;

//函数
void printHello(){
    cout<<"Hello,world!"<<endl;
}  //无参数无返回
int max(int a,int b){
    return a>b?a:b;
}  //有参数有返回

//值传递
void swap1(int a ,int b)
{
	int temp = a;
	a = b; 
	b = temp;
}
//地址传递
void swap2(int * p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//指针+数组+函数
void bubbleSort(int * arr, int len){   //或者int arr[]   均为地址传递，会改变数组，形参相当于数组指针
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

//结构体
struct student{
    string name;
    int age;
    int score;
}stu1;    //第一种定义结构体变量的方法

//结构体嵌套结构体 
struct teacher
{
    //成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct student stu; //子结构体 学生
};

//结构体作为函数参数
//值传递
void printStudent(student stu )
{
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;
}

//地址传递
void printStudent2(student *stu)
{
	stu->age = 28;
	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age  << " 分数：" << stu->score << endl;
}

int main(){

    printHello();
    int max_num=max(5,10);
    cout<<max_num<<endl;
    int a=10;
    //指针：可以通过指针间接访问内存
    //内存编号是从0开始记录的，一般用十六进制数字表示
    int * p;  //指针定义语法： 数据类型 * 变量名 ;
    p = &a; //指针变量赋值：指针指向变量a的地址
    cout << &a << endl; //打印数据a的地址
	cout << p << endl;  //打印指针变量p
	cout << "*p = " << *p << endl;  //通过*操作指针变量指向的内存    解引用
    //普通变量存放的是数据,指针变量存放的是地址
    cout << sizeof(p) << endl;  //指针所占的内存
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

    //空指针：指针变量指向内存中编号为0的空间  用于初始化指针变量
    //int * p1=NULL;
    //cout<<*p1<<endl;  //内存编号0 ~255为系统占用内存，不允许用户访问,访问空指针出错
    //野指针：指针变量指向非法的内存空间

    //利用指针访问数组中的元素
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int * p2 = arr;  //指向数组的指针
    cout<<"第一个元素："<<arr[0]<<endl;
    cout << "指针访问第一个元素： " << *p2 << endl;
    for(int i=0;i<10;i++){
        cout<<*p2<<" ";
        p2++;  //利用指针遍历数组
    }
    cout<<endl;

    //指针与函数
    //利用指针作函数参数，可以修改实参的值
    int b=5,c=10;
    swap1(b,c);  //值传递不会改变实参
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;  //输出：b=5 c=10
    swap2(&b,&c);  //地址传递会改变实参
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;  //输出：b=10 c=5
    //值传递对实参的影响仅限于函数内，而地址传递能实在地改变实参

    //指针+数组+函数
    int arr1[]={5,1,4,9,0,-1,3};
    int len=sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1,len);
    printArray(arr1,len);

    //结构体
    stu1.name = "Peter";
    stu1.age = 17;
    stu1.score = 100;
    struct student stu2 = {"Tom",16,80};  //第二种定义结构体变量的方法
    struct student stu3;
    stu3.name = "Alice";
    stu3.age = 18;
    stu3.score = 90;  //第三种定义结构体变量的方法
    cout << "姓名：" << stu1.name << " 年龄：" << stu1.age  << " 分数：" << stu1.score << endl;
    cout << "姓名：" << stu2.name << " 年龄：" << stu2.age  << " 分数：" << stu2.score << endl;
    cout << "姓名：" << stu3.name << " 年龄：" << stu3.age  << " 分数：" << stu3.score << endl;

    //结构体数组
    struct student arr_stu[3]=
	{
		{"张三",18,80 },
		{"李四",19,60 },
		{"王五",20,70 }
	};
    for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr_stu[i].name << " 年龄：" << arr_stu[i].age << " 分数：" << arr_stu[i].score << endl;
	}

    //结构体指针
    //结构体指针可以通过 -> 操作符 来访问结构体中的成员
    struct student * p_stu = &stu1;
    p_stu->score = 120;
    cout << "姓名：" << stu1.name << " 年龄：" << stu1.age  << " 分数：" << stu1.score << endl;

    //结构体嵌套结构体
    struct teacher t1;
	t1.id = 10000;
	t1.name = "老王";
	t1.age = 40;
    t1.stu.name = "张三";  //嵌套的声明
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;
	cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

    //结构体作为函数参数
    printStudent(stu2);
    printStudent2(&stu2);

    system("pause");
    return 0;
}