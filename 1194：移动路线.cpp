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
	int dp[21][21],m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=1;i<=20;i++) dp[i][1]=1;
	for(j=1;j<=20;j++) dp[1][j]=1;
	for(i=2;i<=20;i++)
	 for(j=2;j<=20;j++)
	 	dp[i][j]=dp[i-1][j]+dp[i][j-1];
	printf("%d",dp[m][n]);
	return 0;
} 
