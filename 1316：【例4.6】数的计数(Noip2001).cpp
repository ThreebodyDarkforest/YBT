#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int ans=0,f[1001];
void fun(int m)
{
	int i;
	if(f[m]!=-1) return;
	f[m]=1;
	for(i=1;i<=m/2;i++)
	{
		fun(i);
		f[m]+=f[i];
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) f[i]=-1;
	for(int i=1;i<=n;i++) fun(i);
	printf("%d",f[n]);
	return 0;
}

