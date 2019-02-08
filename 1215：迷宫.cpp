#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int k,n;
char c;
int ha,la,hb,lb;
int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}},tot=0;
bool a[101][101]={0},ans=0;
void dfs(int h,int l)
{
	for(int t=0;t<4;t++)
	{
		int i=h+dir[t][0];
		int j=l+dir[t][1];
		if(a[i][j]!=1&&i>=0&&j>=0&&i<n&&j<n)
		{
			a[i][j]=1;//原来一直漏了这句。。。 
			if(i==hb&&j==lb)
			{
				printf("YES\n");
				ans=1;
				break;
			}
			else dfs(i,j);
		}
	}
}
int main()
{
	scanf("%d",&k);
	for(int t=0;t<k;t++)
	{
		memset(a,0,sizeof(a));
		ans=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		 for(int j=0;j<n;j++)
		 {
		 	cin>>c;
		 	if(c=='#') a[i][j]=1;
		 }
		scanf("%d%d%d%d",&ha,&la,&hb,&lb);
		if(a[ha][la]||a[hb][lb])
		{
			printf("NO\n");	
			continue;
		}
		else dfs(ha,la);
		if(!ans) printf("NO\n");
	}
	return 0;
}
