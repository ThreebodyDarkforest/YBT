#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[101];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n-1);
	if(n==1) printf("%d",a[0]);
	else printf("%d",a[n-1]-a[0]);
	return 0;
}
