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
}a[1001];
bool cmp(be a,be b)
{
	return a.end<b.end;
}

int main()
{
    int n,m[1001];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d%d",&a[i].begin,&a[i].end);
    sort(a,a+n,cmp);
    int t=a[0].end,tot=1;
    for(int i=1;i<n;i++)
    {
    	if(a[i].begin>=t)
    	{
			t=a[i].end;
    		tot++;
    		continue;
		}
	}
	printf("%d",tot);
    return 0;
}

