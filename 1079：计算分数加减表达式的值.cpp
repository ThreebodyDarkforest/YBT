#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,s=1;
	double sum=0;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		if(i%2==0)	sum-=1.0/i;
		else sum+=1.0/i;
	}
	printf("%.4lf",sum);
	return 0;
} 
