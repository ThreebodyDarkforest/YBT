#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int a[1000001]={0};
int fun(int x)
{
	if (a[x]!=0) return a[x];
	if(x==1||x==2) return x;
	return a[x]=((2*fun(x-1))%32767+fun(x-2)%32767);//dynamic program thoughts �����ס����˼�룡 
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
