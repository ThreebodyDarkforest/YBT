#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1001
using namespace std;
int m,n;
char ch;
int maps[N][N];
int vis[N][N];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int cnt;
void dfs(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        int nx=x+dir[i][0];
        int ny=y+dir[i][1];
        if(nx>=1&&ny>=1&&nx<=n&&ny<=m&&vis[nx][ny]==0&&maps[nx][ny]==1)
        {
            vis[nx][ny]=1;
            cnt++;
            dfs(nx,ny);
        }
    }
}
int main()
{
    while(scanf("%d%d",&m,&n)!=EOF&&m&&n)
    {
        int x,y;
        cnt=1;
        memset(vis,0,sizeof(vis));
        memset(maps,0,sizeof(maps));
 
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                cin>>ch;
                if(ch=='@')
                {
                    x=i;
                    y=j;
                    maps[i][j]=1;
                }
                if(ch=='.')
                    maps[i][j]=1;
                if(ch=='#')
                    maps[i][j]=0;
            }
        vis[x][y]=1;
        dfs(x,y);
        cout<<cnt<<endl;
    }
    return 0;
}

