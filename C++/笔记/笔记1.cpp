#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define day 7; //�곣��

int main()
{
    // 1 C++��ʶ

    //��д����
    cout<<"Hello World"<<endl;
    //����
    const int month = 12;
    cout<<"һ�깲��"<<month<<"����"<<endl;

    //2 ��������

    //sizeof�ؼ���
    cout<<"short������ռ�Ŀռ�"<<sizeof(short)<<endl;
    cout<<"int������ռ�Ŀռ�"<<sizeof(int)<<endl;
    //������
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
        //����С��λ������Ч����λ������ѧ������С��λ��
        //�⺯��  #include <iomanip>
    cout<<setprecision(3)<<d1<<endl; //������λ��Ч����
    cout<<fixed<<setprecision(3)<<d1<<endl; //С���������λ
    cout<<scientific<<setprecision(2)<<d1<<endl; //�ÿ�ѧ��������ʾ��С���������λ
    //�ַ���
    char ch = 'a'; //������+���ַ�
    cout<<ch<<endl;
    cout<<"ch sizeof="<<sizeof(ch)<<endl;
    cout<<"ch��ASCII��Ϊ"<<(int)ch<<endl; //���ch��ASCII��
    ch = 98; //����ASCII��ֱ�Ӹ��ַ��͸�ֵ
    cout<<ch<<endl;
    //ת���ַ�
    cout << "\\" << endl;
	cout << "\tHello" << endl;
	cout << "\n" << endl;
    //�ַ�����
    char str1[] = "Hello World"; //C���Է���ַ���
    string str2 = "Ni Hao! ��ã�"; //C++���Է���ַ���
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str2[1]<<endl; //������+���֣���0��ʼ����ʾ�ַ����е��ַ�
    //��������
    bool flag = true;
    cout<<flag<<endl;
    flag = false;
    cout<<flag<<endl; //���Ϊ1(true)��0(false)
    flag = 1; //����ֱ����1����0��ֵ
    cout<<flag<<endl;
    cout<<"flag sizeof = "<<sizeof(flag)<<endl;
    //���ݵ�����
	int a_in = 0;
	cout << "���������ͱ�����" << endl;
	cin >> a_in;
	cout << a_in << endl;//��������

	double d_in = 0;
	cout << "�����븡���ͱ�����" << endl;
	cin >> d_in;
	cout << d_in << endl;//����������

	char ch_in = 0;
	cout << "�������ַ��ͱ�����" << endl;
	cin >> ch_in;
	cout << ch_in << endl;//�ַ�������

	string str_in;
	cout << "�������ַ����ͱ�����" << endl;
	cin >> str_in;
	cout << str_in << endl;//�ַ���������

    bool flag_in = true;
    cout << "�����벼���ͱ�����" << endl;
	cin >> flag_in;
	cout << flag_in << endl;//������������

    

    system("pause");
    return 0;
}