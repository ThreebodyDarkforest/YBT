#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		ans+=i;
	}
	printf("%d",ans);
	return 0;
}
