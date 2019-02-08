#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 100
using namespace std;
int ans[N][N],a[N];
int vis[N][N];
int tot;
void dfs(int step)
{
    if(step==8+1)
    {
        tot++;
        for(int i=1;i<=8;i++)
            ans[tot][i]=a[i];
        return;
    }
    for(int i=1;i<=8;i++)
    {
        if(vis[0][i]==0&&vis[1][step+i]==0&&vis[2][step-i+8]==0)
        {
            vis[0][i]=1;
            vis[1][i+step]=1;
            vis[2][step-i+8]=1;
            a[step]=i;
            dfs(step+1);
            vis[0][i]=0;
            vis[1][i+step]=0;
            vis[2][step-i+8]=0;
        }
    }
}
int main()
{
    dfs(1);
    int n,k[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&k[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=8;j++) printf("%d",ans[k[i]][j]);
		cout<<endl;
	}
    return 0;
} 
