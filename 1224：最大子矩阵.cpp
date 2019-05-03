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
int a[110][110],f[110][110],dp[110][110];//a储存矩阵，f储存矩阵和。 
int main()
{
	int n,maxl=-999;
	cin>>n;
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=n;j++)
	 cin>>a[i][j];
	//预处理f数组
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=n;j++)
	 {
	 	f[i][j]=f[i-1][j]+a[i][j];
	 	//计算第1行j列到该行该列的矩阵和 
	 }
	for(int h=1;h<=n;h++)
	for(int i=h;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<=n;j++)
		 {
	 		if(sum>0)
	 		sum+=f[i][j]-f[h-1][j];
	 		else sum=f[i][j]-f[h-1][j];
	 		if(sum>maxl) maxl=sum;
	     }
	}
	cout<<maxl;
	return 0;
}
