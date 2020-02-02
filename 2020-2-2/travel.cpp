/*
 * 数据结构:设置地图的带权邻接矩阵为map[][]，即如果从源点u到顶点i有边;
 * 就令map[u][i]等于<u,i>的权值,否则map[u][i] = ∞;
 * 采用一维数组dist[i]来记录从源点到i顶点的最短路径长度;
 * 采用一维数组p[i]来记录最短路径上i顶点的前驱;
 *
 * 初始化:令集合s = {u},对于集合V-S中的所有顶点x,初始化dist[i] = map[u][i],
 * 如果源点u到顶点i有边相连,初始化p[i] = u否则p[i]=-1
 * 
 * 找最小:在集合V-S中依照贪心策略来寻找使得dist[j]具有最小值的顶点t,
 * 即dist[t]=min则顶点t就是集合V-S中距离源点u最近的顶点;
 *
 * 将顶点t加入s中,同时更新V-S
 *
 * 在找最小中已经找到了源点到t的最短路径,那么对于集合V-S中的所有与顶点相邻的顶点j都可借助t走捷径
 * 如果dis[j]>dis[t]+map[t][j],则dis[j] = dis[t]+map[t][j]记录顶点j的前驱为t有p[j]=t
 */
#include<cstdio>
#include<iostream>
#include<cstring>
//#include<windows.h>
#include<stack>
using namespace std;
const int N = 100;     //城市的个数可以修改
const int INF = 1e7;   //初始化无穷大为10000000000
int map[N][N],dist[N],p[N],n,m; 
bool flag[N];
//map[][]:地图对应的邻接矩阵，dist[]:记录源点u到某顶点的最短路径长度。
//p[]:记录源点到某顶点的最短路径上的该顶点的前一个顶点
//flag[]:flag[i]等于true说明顶点i已经加入到集合S否则顶点i属于集合V-S
void Dijkstra(int u)
{
	for(int i =1; i<=n; i++)
	{
		dist[i] = map[u][i]; //初始化源点u到其他各顶点的最短路径长度
		flag[i] = false;
		if(dist[i] == INF)
			p[i]=-1; //源点u到该顶点的路径无限大,说明顶点i与源点u不相邻
		else
			p[i]=u; //说明顶点i与源点u相邻,设置顶点i的前驱p[i]=u
	}
	dist[u] = 0;
	flag[u] = true; //初始时集合s中只有一个元素:源点u
	for(int i=1; i<=n; i++)  //在集合V-S中寻找距离源点u最近的顶点t
	{
		int temp = INF,t = u;
		for(int j=1; j<=n; j++)
			if(!flag[j]&&dist[j]<temp)
			{
				t=j;
				temp=dist[j];
			}
		if(t==u) return ;//找不到t,跳出循环
		flag[t] = true;
		for(int j=1; j<=n; j++)
			if(!flag[j]&&map[t][j]<INF)
				if(dist[j] > (dist[t]+map[t][j]))
				{
					dist[j]=dist[t]+map[t][j];
					p[j] = t;
				}	
	}

}
int main()
{
	int u,v,w,st;
//	system("color 0d");
	cout<<"请输入城市的个数: "<<endl;
	cin>>n;
	cout<<"请输入城市之间路线的个数: "<<endl;
	cin>>m;
	cout<<"请输入城市之间的路线以及距离"<<endl;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			map[i][j] = INF;
		}
	while(m--)
	{
		cin>> u >> v >> w;
		map[u][v]=min(map[u][v],w);
	}
	cout<<"请输入小明所在位置:"<<endl;
	cin>>st;
	Dijkstra(st);
	cout<<"小明所在位置:"<<st<<endl;
	for(int i =1;i<=n;i++)
	{
		cout<<"小明"<<st<<" - "<<"要去的位置:"<< i <<endl;
		if(dist[i]== INF)
			cout<<"no way"<<endl;
		else
			cout<<"最短距离为:"<<dist[i]<<endl;
	}
	return 0;
}





























