#include<algorithm>
#include<iostream>

using namespace std;
const int M = 1000005;

/*
��ʼ�����ݽṹ,���ݽṹ�б���������ͼ�ֵ
����Լ۱�(��ֵ/����)�������ݽṹ��
*/
struct three
{
	double weight;   //����
	double value;    //��ֵ
	double cost_preformence; //�Լ۱�
}s[M];

//�Զ��庯��ʵ���Լ۱�����

bool compare(three a, three b)
{
	return a.cost_preformence > b.cost_preformence; //ָ�����ձ����Լ۱�����
}

void alibaba()
{
	int treasure_n; //��n������
	double donkey_m; //¿��������n
	cout << "�����뱦�������n��ë¿�ĳ�������m : " << endl;
	cin >> treasure_n >> donkey_m;
	for (int i = 0; i < treasure_n; i++)
	{
		cin >> s[i].weight >> s[i].value;
		s[i].cost_preformence = s[i].value / s[i].weight;
	}
	sort(s, s + treasure_n, compare);
	double sum = 0.0;//sum��ʾ̰�ļ�¼���ߵı���֮��
	for (int i = 0; i < treasure_n; i++)
	{
		if (donkey_m>s[i].weight) //������������С��ë¿���ܵ�����
		{
			donkey_m -= s[i].weight;
			sum += s[i].value;
		}
		else
		{
			sum += donkey_m * s[i].cost_preformence; //����װ��
			break;
		}

	}
	cout << "װ�뱦������ֵMaximum value = " << sum << endl;
	system("pause");
}