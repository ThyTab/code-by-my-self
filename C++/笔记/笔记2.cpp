#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{

    //3 �����
    //���������   %ȡģ   a++���õ���   ++aǰ�õ��� 
    //���õ���
	int a = 10;
	a++; //�ȼ���a = a + 1
	cout << a << endl; // 11

	//ǰ�õ���
	int b = 10;
	++b;
	cout << b << endl; // 11

	//����
	//ǰ�õ����ȶԱ�������++���ټ�����ʽ
	int a2 = 10;
	int b2 = ++a2 * 10;
    cout << a2 << endl; //11
	cout << b2 << endl; //110

	//���õ����ȼ�����ʽ����Ա�������++
	int a3 = 10;
	int b3 = a3++ * 10;
    cout << a3 << endl; //11
	cout << b3 << endl; //100

    //��ֵ�����
    //   =   +=   -=   *=   /=   %=

    //�Ƚ������
    //   ==   ��=   >   <   >=   <=

    //�߼������
    //   �ǣ�   ��&&   ��||

    //�����������
    
	//ѡ��ṹ
    //if���
    int score = 0;
    cout << "�����뿼�Է�����" << endl;
    cin >> score;
    if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "�ҿ����˱���" << endl;
		}
		else if (score > 650)
		{
			cout << "�ҿ������廪" << endl;
		}
		else
		{
			cout << "�ҿ������˴�" << endl;
		}
		
	}
	else if (score > 500)
	{
		cout << "�ҿ����˶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "�ҿ�����������ѧ" << endl;
	}
	else
	{
		cout << "��δ���ϱ���" << endl;
	}
    //��Ŀ�����
    //�﷨�� ���ʽ1 ? ���ʽ2 �����ʽ3
    //������ʽ1��ֵΪ�棬ִ�б��ʽ2�������ر��ʽ2�Ľ����������ʽ1��ֵΪ�٣�ִ�б��ʽ3�������ر��ʽ3�Ľ����
    int x = 10;
	int y = 20;
	int z = 0;
    z = x > y ? x : y;
	cout << "z = " << z << endl; //20s
    //C++����Ŀ��������ص��Ǳ���,���Լ�����ֵ
    (x > y ? x : y) = 100;
    cout << "x = " << x << endl; //10
	cout << "y = " << y << endl; //100
	cout << "z = " << z << endl; //20
    //switch���
	int score_movie = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score_movie;
	switch (score_movie)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}
	//switch����б��ʽ����ֻ�������ͻ����ַ���
	//case�����û��break����ô�����һֱ����ִ��
	//��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����

	//ѭ���ṹ
	//whileѭ�����  while(ѭ������){ ѭ����� }
	//do...whileѭ�����  do{ ѭ����� } while(ѭ������);
	//������while����������==do...while����ִ��һ��ѭ�����==�����ж�ѭ������
	//forѭ�����  for(��ʼ���ʽ;�������ʽ;ĩβѭ����) { ѭ�����; }
	//��ת��䣺
		//break��䣺��������ѡ��ṹ��ѭ���ṹ��switch for ...��
		//continue��䣺��==ѭ�����==�У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��   continue��û��ʹ����ѭ����ֹ����break������ѭ��
		//goto��䣺������������ת��䣨������ʹ�ã�
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