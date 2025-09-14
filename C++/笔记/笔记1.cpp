#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define day 7; //宏常量

int main()
{
    // 1 C++初识

    //编写代码
    cout<<"Hello World"<<endl;
    //常量
    const int month = 12;
    cout<<"一年共有"<<month<<"个月"<<endl;

    //2 数据类型

    //sizeof关键字
    cout<<"short类型所占的空间"<<sizeof(short)<<endl;
    cout<<"int类型所占的空间"<<sizeof(int)<<endl;
    //浮点型
    float f1 = 3.14;
    double d1 = 314.159;
    float f2 = 3e3;
    double d2 = 4e-4;
    cout<<f1<<endl;
    cout<<d1<<endl;
    cout<<f2<<endl;
    cout<<d2<<endl;
    cout<<"f2 sizeof="<<sizeof(f2)<<endl;
    cout<<"d2 sizeof="<<sizeof(d2)<<endl;
    cout<<"float sizeof="<<sizeof(float)<<endl;
    cout<<"double sizeof="<<sizeof(double)<<endl;
        //关于小数位数、有效数字位数、科学计数法小数位数
        //库函数  #include <iomanip>
    cout<<setprecision(3)<<d1<<endl; //保留三位有效数字
    cout<<fixed<<setprecision(3)<<d1<<endl; //小数点后保留三位
    cout<<scientific<<setprecision(2)<<d1<<endl; //用科学计数法表示后小数点后保留两位
    //字符型
    char ch = 'a'; //单引号+单字符
    cout<<ch<<endl;
    cout<<"ch sizeof="<<sizeof(ch)<<endl;
    cout<<"ch的ASCII码为"<<(int)ch<<endl; //输出ch的ASCII码
    ch = 98; //利用ASCII码直接给字符型赋值
    cout<<ch<<endl;
    //转义字符
    cout << "\\" << endl;
	cout << "\tHello" << endl;
	cout << "\n" << endl;
    //字符串型
    char str1[] = "Hello World"; //C语言风格字符串
    string str2 = "Ni Hao! 你好！"; //C++语言风格字符串
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str2[1]<<endl; //中括号+数字（从0开始）表示字符串中的字符
    //布尔类型
    bool flag = true;
    cout<<flag<<endl;
    flag = false;
    cout<<flag<<endl; //输出为1(true)或0(false)
    flag = 1; //可以直接用1或者0赋值
    cout<<flag<<endl;
    cout<<"flag sizeof = "<<sizeof(flag)<<endl;
    //数据的输入
	int a_in = 0;
	cout << "请输入整型变量：" << endl;
	cin >> a_in;
	cout << a_in << endl;//整型输入

	double d_in = 0;
	cout << "请输入浮点型变量：" << endl;
	cin >> d_in;
	cout << d_in << endl;//浮点型输入

	char ch_in = 0;
	cout << "请输入字符型变量：" << endl;
	cin >> ch_in;
	cout << ch_in << endl;//字符型输入

	string str_in;
	cout << "请输入字符串型变量：" << endl;
	cin >> str_in;
	cout << str_in << endl;//字符串型输入

    bool flag_in = true;
    cout << "请输入布尔型变量：" << endl;
	cin >> flag_in;
	cout << flag_in << endl;//布尔类型输入

    

    system("pause");
    return 0;
}