#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m,tmp,ans=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		if(tmp==m) ans++;
	}
	printf("%d",ans);
	return 0;
} 
