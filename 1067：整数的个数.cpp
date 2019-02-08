#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,ans1=0,ans5=0,ans0=0,tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		if(tmp==1) ans1++;
		else if(tmp==5) ans5++;
		else if(tmp==10) ans0++;
	}
	printf("%d\n%d\n%d",ans1,ans5,ans0);
	return 0;
} 
