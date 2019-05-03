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
struct node
{
	int x,y;
}q[1000001];
int main()
{
	int dir[8][2]={{-1,0},{1,0},{0,-1},{0,1},{-1,1},{1,1},{1,-1},{-1,-1}};
	char a[150][150];
	int n,m,tot=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
        scanf("%s",a[i]);
	 
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
	 {
	 	if(a[i][j]!='.')
	 	{
	 		int head=1,tail=1;
	 		tot++;a[i][j]='.';
			q[tail].x=j,q[tail].y=i;
			tail++;
			
			do
			{	
				
				for(int i=0;i<8;i++)
				{
					int nx=q[head].x+dir[i][0];
					int ny=q[head].y+dir[i][1];
					if(nx>=0&&nx<m&&ny>=0&&ny<n&&a[ny][nx]!='.')
					{
						q[tail].x=nx;
						q[tail].y=ny;
						a[ny][nx]='.';
						tail++;
					}
				}
				head++;
			}while(head<tail);
		}
	 }
	printf("%d",tot);
	
	 
	return 0;
}
