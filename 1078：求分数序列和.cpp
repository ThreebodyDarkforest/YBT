#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double a[50],q=2,p=1,ans=0,tmp;
	int n;
	a[0]=q/p;
	for(int i=1;i<=50;i++)
	{
		tmp=p;
		p=q;
		q+=tmp;
		a[i]=q/p;														
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++) ans+=a[i];
	printf("%.4lf",ans);
	return 0;
} 
