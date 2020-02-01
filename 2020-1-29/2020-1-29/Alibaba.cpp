#include<algorithm>
#include<iostream>

using namespace std;
const int M = 1000005;

/*
初始化数据结构,数据结构中宝物的重量和价值
求出性价比(价值/重量)放入数据结构中
*/
struct three
{
	double weight;   //重量
	double value;    //价值
	double cost_preformence; //性价比
}s[M];

//自定义函数实现性价比排序

bool compare(three a, three b)
{
	return a.cost_preformence > b.cost_preformence; //指明按照宝物性价比排序
}

void alibaba()
{
	int treasure_n; //有n个宝物
	double donkey_m; //驴的载重量n
	cout << "请输入宝物的数量n及毛驴的承载重量m : " << endl;
	cin >> treasure_n >> donkey_m;
	for (int i = 0; i < treasure_n; i++)
	{
		cin >> s[i].weight >> s[i].value;
		s[i].cost_preformence = s[i].value / s[i].weight;
	}
	sort(s, s + treasure_n, compare);
	double sum = 0.0;//sum表示贪心记录运走的宝物之和
	for (int i = 0; i < treasure_n; i++)
	{
		if (donkey_m>s[i].weight) //如果宝物的重量小于毛驴承受的能力
		{
			donkey_m -= s[i].weight;
			sum += s[i].value;
		}
		else
		{
			sum += donkey_m * s[i].cost_preformence; //部分装入
			break;
		}

	}
	cout << "装入宝物的最大值Maximum value = " << sum << endl;
	system("pause");
}