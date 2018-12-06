#include<cstdio>
#include<cmath>
using namespace std;
double fun(double,double);
double fun(double x,double n)
{
	if(n==1) return sqrt(x+n);
	else return sqrt(n+fun(x,n-1));
}
int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("%.2lf",fun(a,b));
	return 0;
}
