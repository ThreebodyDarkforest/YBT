#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
struct p{
	int begin,end;
}a[50010];
bool cmp(p a,p b)
{
	return a.begin<b.begin;
}
bool bh(p a,p b)
{
	if(a.begin<=b.begin&&a.end>=b.end) return true;
}
void solve()
{
	int k=a[1].end,cnt=1;
	for(int i=2;i<=n;i++)
	{
		if(a[i].begin<=k&&a[i].end>=k)
		{
			k=a[i].end;
			cnt++;
		}
		else
		{
			if(a[i].end<=k) cnt++;
			continue;
		}
	}
	if(cnt==n) cout<<a[1].begin<<" "<<k<<endl;
	else cout<<"no"<<endl;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].begin>>a[i].end;
	sort(a+1,a+n+1,cmp);
	solve();
	return 0;
}
/*
1:
5
5 6
1 5
10 10
6 9
8 10

1 10

2:
3
1 1000
1 6
1000 2000

1 2000

3:
4
2 3
4 5
5 6
7 8

no

*/
