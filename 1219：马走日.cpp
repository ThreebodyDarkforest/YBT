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
int f[15][15],T,n,m,x,y,vis[15][15],ans=0;
int dir[8][2]={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}};
void dfs(int h,int l,int step)
{
	for(int i=0;i<8;i++)
	{
		if(vis[h][l]==0&&h>=0&&h<m&&l>=0&&l<n)
		{
			if(step==n*m){ans++;return;}
			vis[h][l]=1;
			dfs(h+dir[i][0],l+dir[i][1],step+1);
			vis[h][l]=0;
		}
	}
}
int main()
{
	memset(f,0,sizeof(f));
	memset(vis,0,sizeof(vis));
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		ans=0;
		scanf("%d%d%d%d",&n,&m,&x,&y);
		dfs(y,x,1);
		printf("%d\n",ans);
	}
	return 0;
}
