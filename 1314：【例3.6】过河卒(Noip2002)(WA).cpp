#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m,cx,cy,nx,ny,i,j;
	int next[][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
	scanf("%d%d%d%d",&n,&m,&cx,&cy);
	unsigned long long dp[n][m];//paths
	bool h[n][m];//0 null 1 horse
	memset(h,0,sizeof(h));
	h[cx][cy]=1;
	for(i=0;i<8;i++)
    {
        nx=cx+next[i][0];
        ny=cy+next[i][1];
        if(0<=nx&&nx<=n&&0<=ny&&ny<=m)
        {
            h[nx][ny]=1;
            dp[nx][ny]=0;
        }
    }
	//初始化 
	dp[0][0]=1;
	for(i=0;i<=n;i++)
    {
        if(h[i][0]==1)
            while(i<=n)
            	{
                	i++;
                	dp[i][0]=0;
            	}
        else 
            dp[i][0]=1;
    }
    for(j=0;j<=m;j++)
    {
        if(h[0][j]==1)
            while(j<=m)
            {
                j++;
                dp[0][j]=0;
            }
        else 
            dp[0][j]=1;
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(h[i][j]==0)
                dp[i][j]=dp[i][j-1]+dp[i-1][j];//递推过程 
    cout<<dp[n][m]<<endl;
	return 0; 
}
