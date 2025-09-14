#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    //数组：内部数据为相同数据类型
    
    //一维数组   数组中下标是从0开始索引
    
    //一维数组的定义方法
    //定义方式1
	//数据类型 数组名[元素个数];
	int score[10];
    //利用下标赋值
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;
    //利用下标输出
	cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;
    //第二种定义方式
	//数据类型 数组名[元素个数] =  {值1，值2 ，值3 ...};
	//如果{}内不足10个数据，剩余数据用0补全
	int score2[10] = { 100, 90,80,70,60,50,40,30,20 };
	//逐个输出
	//cout << score2[0] << endl;
	//cout << score2[1] << endl;
    //一个一个输出太麻烦，因此可以利用循环进行输出
	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}
    //定义方式3
	//数据类型 数组名[] =  {值1，值2 ，值3 ...};
	int score3[] = { 100,90,80,70,60,50,40,30,20,10 };
    for (int i = 0; i < 10; i++)
	{
		cout << score3[i] << endl;
	}
    
    //一维数组数组名
    //数组名用途
	//1、可以获取整个数组占用内存空间大小
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "整个数组所占内存空间为： " << sizeof(arr1) << endl;
	cout << "每个元素所占内存空间为： " << sizeof(arr1[0]) << endl;
	cout << "数组的元素个数为： " << sizeof(arr1) / sizeof(arr1[0]) << endl;
    //2、可以通过数组名获取到数组首地址
	cout << "数组首地址为： " << (int)arr1 << endl;
	cout << "数组中第一个元素地址为： " << (int)&arr1[0] << endl; //&不能省略
	cout << "数组中第二个元素地址为： " << (int)&arr1[1] << endl;
    //3、直接打印数组名，可以查看数组所占内存的首地址
    cout << "数组所占内存的首地址为： " << arr1 << endl;

    //冒泡排序
	int arr2[9] = { 4,2,8,0,5,7,1,3,9 };
	for(int i=0;i<9-1;i++){
		for(int j=0;j<9-1-i;j++){
			if(arr2[j]>arr2[j+1]){
				int temp=arr2[j+1];
				arr2[j+1]=arr2[j];
				arr2[j]=temp;
			}
		}
	}
	for(int i=0;i<9;i++){
		cout<<arr2[i]<<endl;
	}

	//二维数组

	//定义方式
	//方式1  
	//数组类型 数组名 [行数][列数]
	int arr3[2][3];
	arr3[0][0] = 1;
	arr3[0][1] = 2;
	arr3[0][2] = 3;
	arr3[1][0] = 4;
	arr3[1][1] = 5;
	arr3[1][2] = 6;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	//方式2 
	//数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };
	int arr4[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	//方式3
	//数据类型 数组名[行数][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr5[2][3] = { 1,2,3,4,5,6 }; 
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr5[i][j] << " ";
		}
		cout << endl;
	}
	//方式4 
	//数据类型 数组名[][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr6[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr6[i][j] << " ";
		}
		cout << endl;
	}

	//二维数组数组名
	cout << "二维数组大小： " << sizeof(arr3) << endl;
	cout << "二维数组一行大小： " << sizeof(arr3[0]) << endl;
	cout << "二维数组元素大小： " << sizeof(arr3[0][0]) << endl;
	cout << "二维数组行数： " << sizeof(arr3) / sizeof(arr3[0]) << endl;
	cout << "二维数组列数： " << sizeof(arr3[0]) / sizeof(arr3[0][0]) << endl;
	//地址
	cout << "二维数组首地址：" << arr3 << endl; //二维数组名就是这个数组的首地址,与一维数组不同
	cout << "二维数组第一行地址：" << arr3[0] << endl;
	cout << "二维数组第二行地址：" << arr3[1] << endl;
	cout << "二维数组第一个元素地址：" << &arr3[0][0] << endl;
	cout << "二维数组第二个元素地址：" << &arr3[0][1] << endl;


    
    system("pause");
    return 0;

}

