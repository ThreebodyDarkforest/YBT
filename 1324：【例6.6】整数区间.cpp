#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
struct be
{
	int begin;
	int end;
}a[10001];
bool cmp(be a,be b)
{
	return a.end<b.end;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d%d",&a[i].begin,&a[i].end);
	sort(a,a+n,cmp);
	int i=1;
	int x=a[0].end,t=1;
	for(i=0;i<n;i++)
	{
		if(x>=a[i].begin) continue;
		else
		{
			x=a[i].end;
			t++;
		}
	}
	printf("%d",t);
    return 0;
}

