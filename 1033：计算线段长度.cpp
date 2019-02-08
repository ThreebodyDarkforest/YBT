#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double xa,xb,ya,yb;
	scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
	printf("%.3lf",sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)));
	return 0;
}
