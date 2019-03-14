#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int ansu=0,ansd=1;
int gcd(int a,int b);
int hj(int a,int b)//化简 
{
	if(a%b==0||b%a==0)
	{
		int tmp=gcd(a,b);
		ansu/=tmp;
		ansd/=tmp;
	}
}
int gcd(int a,int b)//最大公约数 
{
	return b==0?a:gcd(b,a%b); 
}
int gbs(int a,int b)//最小公倍数 
{
	return (a*b)/gcd(a,b);
}
void fun(int u,int d)//两分数相加 
{ 
	hj(ansu,ansd);
	int g=gbs(ansd,d);//最小公倍数 
	int ku=u*(g/d); //目前分子 
	int pu=ansu*(g/ansd);//前驱分子 
	ansu=ku+pu;//加起来得到分子 
	ansd=g;
}
int main()
{
	int a,b,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d/%d",&a,&b);
		fun(a,b);
	}
	hj(ansu,ansd);
	if(ansu==ansd)
	{
		printf("1");return 0;
	}
	if(ansd==1)
	{
		printf("%d",ansu);return 0;
	}
	printf("%d/%d",ansu,ansd);
	return 0;
}

