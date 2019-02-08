#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	long long a[101]={0};
	a[1]=1;a[2]=2;a[3]=4;
	for(int i=4;i<=100;i++)
	{
		a[i]=a[i-3]+a[i-2]+a[i-1];
	}
	while(scanf("%d",&n)==1&&n!=0)
	printf("%lld\n",a[n]);
	return 0;
}
