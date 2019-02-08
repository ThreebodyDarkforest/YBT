#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	long long a[100]={0},b[100]={0},x,y,z,i,j;//x everypast-x-months y produce z months
	scanf("%lld%lld%lld",&x,&y,&z);
	for(i=1;i<=x;i++) {a[i]=1;b[i]=0;} 
	for(i=x+1;i<=z+1;i++)
	{
		b[i]=y*a[i-x];
		a[i]=a[i-1]+b[i-2];
	}
	printf("%lld",a[z+1]);
	return 0;
}
