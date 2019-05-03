#include<cstdio>
#include<iostream>
#include<cstring>
#define N 201
int a[500],sum[500];
using namespace std;

void mul(int x)//高精度乘法 
{
    int i;
    for(i=1;i<=a[0];i++)
        a[i]*=x;
    for(i=1;i<=a[0];i++)
    {
        a[i+1]+=a[i]/10;
        a[i]%=10;
    }
 
    i=a[0];
    while(a[i+1]>0)
        i++;
 
    a[0]=i;
    i=a[0];
    while(a[i]>10)
    {
        a[i+1]+=a[i]/10;
        a[i]%=10;
        i++;
    }
    a[0]=i;
}
int main()
{
	int n;
	scanf("%d",&n);
	return 0;
}
