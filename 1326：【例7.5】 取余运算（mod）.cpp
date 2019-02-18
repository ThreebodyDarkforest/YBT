#include<cstdio>
#include<iostream>
#include<cmath>
int b,p,k,t;
int f(int p)
{
	if(p==0) return 1;
	int tmp=f(p/2)%k;
	tmp=(tmp*tmp)%k;
	if(p%2==1) tmp=(tmp*b)%k;
	return tmp;
} 
int main()
{
	scanf("%d%d%d",&b,&p,&k);
	int tmpb=b;
	b%=k;
	printf("%d^%d mod %d=%d",tmpb,p,k,f(p));
	return 0;
} 
