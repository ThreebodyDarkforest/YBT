#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int sum=0,n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		double g=x%10,s=(x%100-x%10)/10,b=(x%1000-x%100)/100,q=(x-x%1000)/1000;
		if((g-q-b-s)>0) sum++;
	}
	printf("%d",sum);
	return 0;
}
