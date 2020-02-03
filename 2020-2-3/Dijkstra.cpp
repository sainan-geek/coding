#include<queue>
#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;
const int N = 100;
const int INF = 1e7;
int map[N][N],dist[N],n,m;
int flag[N];
struct Node{
	int u,step;
	Node(){};
	Node(int a,int sp){
		u=a;step = sp;
	}
	bool operator < (const Node& a)const{
		return step>a.step;
	}
};
void Dijkstra(int st){
	priority_queue <Node> Q;
	Q.push(Node(st,0));
	memset(flag,0,sizeof(flag));
	for(int i=1;i<=n;++i)
		dist[i] = INF;
	dist[st]=0;
	while(!Q.empty())
	{
		Node it=Q.top();
		Q.pop();
		int t = it.u;
		if(flag[t])
			continue;
		flag[t] = 1;
		for(int i =1;i<=n;i++)
		{
			if(!flag[i]&&map[t][i]<INF)
			{
				if(dist[i]>dist[t]+map[t][i])
				{
					dist[i] = dist[t]+map[t][i];
					Q.push(Node(i,dist[i]));
				}
			}
		}
	}
}
int main()
{
	int u,v,w,st;
	system("color 0d");
	cout<<"please intput the number of city:"<<endl;
	cin>>n;
	cout<<"please input the number of road between the city:"<<endl;
	cin>>m;
	for(int i = 1;i<=n;i++)
		for(int j =1;j<=n;j++)
		{
			map[i][j] = INF;
		}
	cout <<"please input the u,v and w:"<<endl;
	while(m--)
	{
		cin>>u>>v>>w;
		map[u][v] = min(map[u][v],w);
	}
	cout<<"please input the location of xiaoming"<<endl;
	cin>>st;
	Dijkstra(st);
	cout<<"Now xiaoming now is "<<st<<endl;
	for(int i =1;i<=n;i++)
	{
		cout<<"xiaoming "<<st<<"--->"<<"will go"<<i;
		if(dist[i]==INF)
			cout<<"sorry"<<endl;
		else
			cout<<"The short distance"<<dist[i]<<endl;
	}
	return 0;
}

