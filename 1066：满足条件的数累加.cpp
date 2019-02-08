#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int m,n,ans=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++) if(i%17==0) ans+=i;
	printf("%d",ans);
	return 0;
} 
