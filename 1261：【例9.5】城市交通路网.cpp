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
#define N 11
#define MOD 2520
#define E 1e-12
int a[N][N],f[20],pre[N];
using namespace std;
void print(int x)
{
	while(x!=0)
	{
		cout<<x<<' ';
		x=pre[x];
	}
	cout<<endl;
}
int main()
{
	int k,l,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=n;j++) cin>>a[i][j];
	for(int i=1;i<=n;i++) f[i]=100000;
	f[n]=0;
	 
	for(int i=n-1;i>=1;i--)
		for(int j=i+1;j<=n;j++)
	 		if(a[i][j]>0&&f[j]!=100000&&f[j]+a[i][j]<f[i])
	 		{
	 			f[i]=f[j]+a[i][j];
	 			pre[i]=j;
			}
	printf("minlong=%d\n",f[1]);
	print(1);
	return 0;
}
