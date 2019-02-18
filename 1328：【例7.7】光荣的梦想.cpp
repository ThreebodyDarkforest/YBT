#include<iostream>
#include<cstdio>
#include<algorithm>
int tmp[10001],a[10001],tot=0;
using namespace std;
void sort(int l,int r)
{
	if(l==r) return;
	int mid=(l+r)/2;
	sort(l,mid);
	sort(mid+1,r);
	int p=l,i=l,j=mid+1;
	while(i<=mid&&j<=r)
	{
		if(a[i]>a[j])
		{
			tot=tot+mid-i+1;
			tmp[p++]=a[j++];
		}
		else tmp[p++]=a[i++];
	}
	while(i<=mid) tmp[p++]=a[i++];
	while(j<=r) tmp[p++]=a[j++];
	for(i=l;i<=r;i++) a[i]=tmp[i]; 
} 
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(1,n);
	printf("%d",tot);
	return 0;
}
