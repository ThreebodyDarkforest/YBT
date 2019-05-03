#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 10010
#define MOD 2520
#define E 1e-12
using namespace std;
bool vis[10][10];
int a[10][10],pre[N];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
struct node{
	int x,y;
}q[N];
void print(int tail)//�ݹ����·���������Ҹ�ϰ�ߴ�1��ʼ����
{					//����Ŀ�Ǵ�0��ʼ�����ԡ����� 
	if(pre[tail]!=tail) print(pre[tail]);
	cout<<"("<<	q[tail].x-1<<", "<<q[tail].y-1<<")"<<endl;
}
void bfs(int i,int j)
{
	int head=0,tail=1;
	q[tail].x=i;q[tail].y=j;
	pre[tail]=tail;
	memset(vis,0,sizeof(vis));
	do
	{
		head++;
		for(int i=0;i<4;i++)
		{
			int nx=q[head].x+dir[i][0];
			int ny=q[head].y+dir[i][1];
			if(nx>0&&nx<=5&&ny>0&&ny<=5&&vis[nx][ny]==0&&a[nx][ny]!=1)
			{
				tail++;
				q[tail].x=nx;
				q[tail].y=ny;
				pre[tail]=head;
				vis[nx][ny]=1;
			}
			if(nx==5&&ny==5){print(tail);return;}
		}
	}while(head<tail);
}
int main()
{
	for(int i=1;i<=5;i++)
	 for(int j=1;j<=5;j++)
	 	scanf("%d",&a[i][j]);
	if(a[5][5]==1) return 0;//��֦���� 
	bfs(1,1);
	return 0;
} 
