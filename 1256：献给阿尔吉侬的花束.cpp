#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#define N 201
using namespace std;
int a[N][N];
int r,c;
bool vis[N][N];
int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
struct node{
	int x,y;
	int step;
}q[100010];
void bfs(int i,int j)
{
	int head=0,tail=1;
	q[tail].x=i;q[tail].y=j;q[tail].step=0;
	
	do
	{
		head++;
		int step=q[head].step;
		for(int i=0;i<4;i++)
		{
			int nx=q[head].x+dir[i][0];
			int ny=q[head].y+dir[i][1];
			if(nx>0&&nx<=r&&ny>0&&ny<=c&&vis[nx][ny]==0&&a[nx][ny]==0)
			{
				tail++;
				q[tail].x=nx;
				q[tail].y=ny;
				q[tail].step=step+1;
				vis[nx][ny]=1;
			}
			else if(a[nx][ny]==3)
			{
				printf("%d\n",step+1);
				return;
			}
		}
	}while(head<tail);
	printf("oop!\n");
}
int main()
{
	int t;
	char ch[N];
	cin>>t;
	while(t--)
	{
		memset(a,-1,sizeof(a));
		memset(vis,0,sizeof(vis));
		scanf("%d%d",&r,&c);
		getchar();
		for(int i=1;i<=r;i++)
		 {
		 	scanf("%s",ch);
		 	for(int j=0;j<c;j++)
		 	{
		 		if(ch[j]=='.') a[i][j+1]=0;
		 		if(ch[j]=='#') a[i][j+1]=1;
		 		if(ch[j]=='S') a[i][j+1]=2;
		 		if(ch[j]=='E') a[i][j+1]=3;
			}
		 }
		for(int i=1;i<=r;i++)
		 for(int j=1;j<=c;j++)
		 	if(a[i][j]==2)
		 	{
		 		bfs(i,j);
		 		break;
			}
		/*for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=c;j++)
			cout<<a[i][j];
			cout<<endl;
		}*/
		 
	}
	return 0;
}
