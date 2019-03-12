#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1][n+1];
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=i;j++) scanf("%d",&a[i][j]);
	for(int i=n-1;i>0;i--)
	 for(int j=1;j<=i;j++)
	 {
	 	a[i][j]=max(a[i][j]+a[i+1][j],a[i][j]+a[i+1][j+1]);
	 }
	printf("%d",a[1][1]);
	return 0;
}
