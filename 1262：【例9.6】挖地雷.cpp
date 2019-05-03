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
#define N 210
#define MOD 2520
#define E 1e-12
int w[N],dp[N],pre[N];
bool a[N][N]={0};
using namespace std;
void print(int x)
{
	if(x!=0) cout<<'-'<<x;
	if(x!=0) print(pre[x]);
	else return;
}
int main()
{
	int n,x,y,m,k;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>w[i];
	while(cin>>x>>y)
	{
		if(x==0&&y==0) break;
		a[x][y]=1;
	}
	for(int i=1;i<=n;i++) dp[i]=-99999;
	dp[n]=w[n];
	for(int i=n-1;i>=1;i--)
	 for(int j=i+1;j<=n;j++)
	 {
	 	if(a[i][j]&&dp[j]!=-99999&&w[i]+dp[j]>dp[i])
	 	{
	 		dp[i]=dp[j]+w[i];
	 		pre[i]=j;
		}
	 }
	 k=1;
	 for(int i=2;i<=n;i++)
	  if(dp[i]>dp[k]) k=i;
	 m=dp[k];
	 cout<<k;
	 print(pre[k]);
	 cout<<endl;
	 cout<<m<<endl;
	 return 0;
}
