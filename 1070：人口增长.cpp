#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	double x,ans;
	scanf("%lf%d",&x,&n);
	ans=x;
	for(int i=0;i<n;i++) ans*=1.001;
	printf("%.4lf",ans);
	return 0;
}
