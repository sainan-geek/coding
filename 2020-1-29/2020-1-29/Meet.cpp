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
	cout<<"�����������"<<endl;
	cin >> sum_meet;
	int i;
	cout<<"�������Ŀ�ʼʱ��ͽ���ʱ�䣬�ÿո�ֿ�: "<<endl;
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
	cout<<"������Ļ������� :"<<endl;
	int i;
	cout << "������" << " ��ʼʱ�� " << "����ʱ��" << endl;
	for (i = 0; i < sum_meet; i++)
	{
		cout << "  " << meet[i].number << "\t\t" << meet[i].begin << "\t\t" << meet[i].end << endl;
	}
	cout<<"===================================================================="<<endl;
	cout << "ѡ�����Ĺ���: " << endl;
	cout << " ѡ���"<<meet[0].number<<"������"<< endl;
	max_meet = 1;
	int last = meet[0].end;
	for (i = 1; i <= sum_meet; ++i)
	{
		if (meet[i].begin >= last)
		{
			max_meet++;
			last = meet[i].end;
			cout << " ѡ���" << meet[i].number << "������" << endl;
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