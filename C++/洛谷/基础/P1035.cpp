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
        sum+=1.0/n; //�������������мӼ��˳�����ʱ�õ��Ľ��������������õ�С���������Ҫ�ֶ���������㲹���Ϊ������
    }
    cout<<n<<endl;

    system("pause");
    return 0;
}