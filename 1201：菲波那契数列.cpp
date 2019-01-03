#include<iostream>
#include<cstdio>
int fun(int x)
{
	if(x==1||x==2) return 1;
	return fun(x-1)+fun(x-2);
}
int main()
{
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		printf("%d\n",fun(x));
	}
	return 0;
}
