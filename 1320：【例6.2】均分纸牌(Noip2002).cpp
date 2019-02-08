#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
	int avg=0,n,a[101],i,tot=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 scanf("%d",&a[i]);
		 avg+=a[i];
	}
	avg/=i;
	for(j=0;j<n;j++) a[j]-=avg;
	i=0;j=n-1;
	while(a[i]==0&&i<n) i++;
	while(a[j]==0&&j>1) j--; 
	for(int t=i;t<j;t++)
	{	
		if(a[t]==0) continue;
		a[t+1]+=a[t];
		a[t]=0;
		tot++;
	}
	printf("%d",tot);
	return 0;
}
