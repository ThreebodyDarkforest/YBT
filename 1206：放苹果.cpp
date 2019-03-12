#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int fun(int m,int n)//mÆ»¹û£¬nÅÌ×Ó 
{
	if(m==0) return 1;
	if(n==1) return 1;
	if(m<n) return fun(m,m);
	return fun(m,n-1)+fun(m-n,n);
}
int main()
{
	int t,m,n,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d%d",&m,&n);
		printf("%d\n",fun(m,n));
	}
	return 0;
}
