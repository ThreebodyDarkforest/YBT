#include<iostream>
#include<cstdio>
int a[100000];
using namespace std;
void ms(int s,int t)
{
	int r[t+5];
	if(s==t) return;
	int mid=(s+t)/2;
	ms(s,mid);
	ms(mid+1,t);
	int i=s,j=mid+1,k=s;
	while(i<=mid&&j<=t)
	{
		if(a[i]<=a[j])
		{
			r[k]=a[i];k++;i++;
		}
		else
		{
			r[k]=a[j];k++;j++;	
		}
	}
	while(i<=mid)
	{
		r[k]=a[i];k++;i++;
	}
	while(j<=t)
	{
		r[k]=a[j];k++;j++;
	}
	for(int i=s;i<=t;i++) a[i]=r[i];
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	ms(0,n-1);
	for(int i=0;i<n;i++) printf("%d",a[i]);
}

