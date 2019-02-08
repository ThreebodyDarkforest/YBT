#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}
