#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double sum=0.0;
    int n=0;
    int k;
    cin>>k;
    while(sum<=k){
        n++;
        sum+=1.0/n; //整形与整数进行加减乘除计算时得到的结果是整数，若想得到小数结果，需要手动将整数添点补零变为浮点数
    }
    cout<<n<<endl;

    system("pause");
    return 0;
}