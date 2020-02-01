#include<algorithm>
#include<iostream>
#include<cstring>

using namespace std;

struct Meet
{
	int begin;
	int end;
	int number;
}meet[1000];

class SetMeet 
{
	public:
		void init();
		void solve();
	private:
		int sum_meet, max_meet;
};

void SetMeet::init()
{
	int s, e;
	cout<<"输入会议总数"<<endl;
	cin >> sum_meet;
	int i;
	cout<<"输入会议的开始时间和结束时间，用空格分开: "<<endl;
	for (i = 0; i < sum_meet; i++)
	{
		cin >> s >> e;
		meet[i].begin = s;
		meet[i].end = e;
		meet[i].number = i + 1;
	}
}

bool compare(Meet x, Meet y)
{
	if (x.end == y.end)
		return x.begin > y.begin;
	return x.end < y.end;
}

void SetMeet::solve() 
{
	sort(meet, meet + sum_meet, compare);
	cout<<"排完序的会议如下 :"<<endl;
	int i;
	cout << "会议编号" << " 开始时间 " << "结束时间" << endl;
	for (i = 0; i < sum_meet; i++)
	{
		cout << "  " << meet[i].number << "\t\t" << meet[i].begin << "\t\t" << meet[i].end << endl;
	}
	cout<<"===================================================================="<<endl;
	cout << "选择会议的过程: " << endl;
	cout << " 选择第"<<meet[0].number<<"个会议"<< endl;
	max_meet = 1;
	int last = meet[0].end;
	for (i = 1; i <= sum_meet; ++i)
	{
		if (meet[i].begin >= last)
		{
			max_meet++;
			last = meet[i].end;
			cout << " 选择第" << meet[i].number << "个会议" << endl;
		}
	}
}
int main() 
{
	SetMeet setmett;
	setmett.init();
	setmett.solve();
	system("pause");
	return 0;
}