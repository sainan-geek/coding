#include <iostream>
#include <algorithm>
const int N = 1000005;
using namespace std;
double w[N];
int main()
{
	double c;
	int n;
	cout<<"请输入载重量c和古董个数n:"<<endl;
	cin>>c>>n;
	cout<<"请输入每个古董的重量,用空格分开:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
	}
	sort(w,w+n);
	double tmp=0.0;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		tmp+=w[i];
		if(tmp<=c)
			ans++;
		else
			break;
	}
	cout<<"能装入的古董最大数量为ans="<<endl;
	cout<<ans<<endl;
	return 0;
}
