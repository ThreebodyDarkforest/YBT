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
int main()
{
	int dp[201],i,j,n;
	dp[0]=1;dp[1]=2;
	scanf("%d",&n);
	for(i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
	printf("%d",dp[n-1]);
	return 0;
}
