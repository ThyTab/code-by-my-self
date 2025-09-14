#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{

    //3 运算符
    //算术运算符   %取模   a++后置递增   ++a前置递增 
    //后置递增
	int a = 10;
	a++; //等价于a = a + 1
	cout << a << endl; // 11

	//前置递增
	int b = 10;
	++b;
	cout << b << endl; // 11

	//区别
	//前置递增先对变量进行++，再计算表达式
	int a2 = 10;
	int b2 = ++a2 * 10;
    cout << a2 << endl; //11
	cout << b2 << endl; //110

	//后置递增先计算表达式，后对变量进行++
	int a3 = 10;
	int b3 = a3++ * 10;
    cout << a3 << endl; //11
	cout << b3 << endl; //100

    //赋值运算符
    //   =   +=   -=   *=   /=   %=

    //比较运算符
    //   ==   ！=   >   <   >=   <=

    //逻辑运算符
    //   非！   与&&   或||

    //程序流程设计
    
	//选择结构
    //if语句
    int score = 0;
    cout << "请输入考试分数：" << endl;
    cin >> score;
    if (score > 600)
	{
		cout << "我考上了一本大学" << endl;
		if (score > 700)
		{
			cout << "我考上了北大" << endl;
		}
		else if (score > 650)
		{
			cout << "我考上了清华" << endl;
		}
		else
		{
			cout << "我考上了人大" << endl;
		}
		
	}
	else if (score > 500)
	{
		cout << "我考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "我考上了三本大学" << endl;
	}
	else
	{
		cout << "我未考上本科" << endl;
	}
    //三目运算符
    //语法： 表达式1 ? 表达式2 ：表达式3
    //如果表达式1的值为真，执行表达式2，并返回表达式2的结果；如果表达式1的值为假，执行表达式3，并返回表达式3的结果。
    int x = 10;
	int y = 20;
	int z = 0;
    z = x > y ? x : y;
	cout << "z = " << z << endl; //20s
    //C++中三目运算符返回的是变量,可以继续赋值
    (x > y ? x : y) = 100;
    cout << "x = " << x << endl; //10
	cout << "y = " << y << endl; //100
	cout << "z = " << z << endl; //20
    //switch语句
	int score_movie = 0;
	cout << "请给电影打分" << endl;
	cin >> score_movie;
	switch (score_movie)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
	//switch语句中表达式类型只能是整型或者字符型
	//case里如果没有break，那么程序会一直向下执行
	//与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间

	//循环结构
	//while循环语句  while(循环条件){ 循环语句 }
	//do...while循环语句  do{ 循环语句 } while(循环条件);
	//区别：与while的区别在于==do...while会先执行一次循环语句==，再判断循环条件
	//for循环语句  for(起始表达式;条件表达式;末尾循环体) { 循环语句; }
	//跳转语句：
		//break语句：用于跳出选择结构和循环结构（switch for ...）
		//continue语句：在==循环语句==中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环   continue并没有使整个循环终止，而break会跳出循环
		//goto语句：可以无条件跳转语句（不建议使用）
	cout << "1" << endl;
	goto FLAG;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;

    system("pause");
    return 0;
}