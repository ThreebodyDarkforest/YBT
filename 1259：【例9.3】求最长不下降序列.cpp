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
using namespace std;
struct node{
	long long x,len,pos;
}dp[N];
int main()
{
	long long n,l,k;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&dp[i].x);
		dp[i].len=1;
		dp[i].pos=0;
	}
	//求最长不下降序列 
	for(int i=n-1;i>0;i--)
	{
		l=0;k=0;
		for(int j=i+1;j<=n;j++)
		{
			if(dp[j].x>=dp[i].x&&dp[j].len>l)
			{
				l=dp[j].len;
				k=j;
			}
		}
		if(l>0)
		{
			dp[i].len=l+1;
			dp[i].pos=k;
		}
	}
	//找最长不下降序列
	k=1;
	for(int j=1;j<=n;j++)
	 if(dp[j].len>dp[k].len) k=j;
	cout<<"max="<<dp[k].len<<endl;
	while(k!=0)
	{
		cout<<dp[k].x<<' ';
		k=dp[k].pos;
	}
	return 0;
}
