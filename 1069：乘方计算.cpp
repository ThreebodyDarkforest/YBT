#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,n;
	scanf("%d%d",&a,&n);
	int ans=a;
	for(int i=1;i<n;i++) ans*=a;
	printf("%d",ans);
	return 0;
}
