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
#define N 201
#define MOD 2520
#define E 1e-12
int r,c,a[N][N];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
struct node{
	int x,y;
	int step;
}q[100010];
using namespace std;
void bfs()
{
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char c;
		memset(a,0,sizeof(a));
		scanf("%d%d",&r,&c);
		for(int i=1;i<=r;i++)
		 for(int j=1;j<=c;j++)
		 {
		 	scanf("%c",&c);
		 	if(c=='.') a[i][j]=0;
		 	if(c=='#') a[i][j]=1;
		 	if(c=='S') a[i][j]=2;
		 	if(c=='E') a[i][j]=3;
		 }
		 for(int i=1;i<=r;i++)
		  for(int j=1;j<=c;j++);
		  //if(a[i][j]==2){bfs(i,j);break;}
	}
	return 0;
} 
