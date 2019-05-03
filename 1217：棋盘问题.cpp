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
#define N 101
#define MOD 2520
#define E 1e-12
using namespace std;
int l[10],n,k,ans=0,a[10][10];// l判断列上是否有棋子，a储存棋盘 
char c;
void dfs(int x,int step)//x当前行，step当前放置棋子数 
{
	if(step==k) ans++;
	else
	for(int i=x;i<n;i++)//从x行开始搜索下面的剩余棋盘，以得到整张棋盘的解 
	 for(int j=0;j<n;j++)
	 {
	 	if(l[j]==0&&a[i][j]==1)
	 	{
	 		l[j]=1;
	 		dfs(i+1,step+1);
			l[j]=0;
		}
	 }
}
int main()
{
	do
	{
		memset(l,0,sizeof(l));
		memset(a,0,sizeof(a));
		ans=0;
		scanf("%d%d",&n,&k);
		if(n==-1&&k==-1) break;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
		 	{
			 	cin>>c;
		 		if(c=='#') a[i][j]=1;
		 		else a[i][j]=0;
			}
		}
		dfs(0,0);
		printf("%d\n",ans);
	}while(n!=-1&&k!=-1);
	return 0;
}
