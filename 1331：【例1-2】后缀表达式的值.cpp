#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<queue>
#define N 201
char c[256];
long long s[251];
using namespace std;
int main()
{
	int i=0,top=0;
	long long x;
	gets(c);
	while(i<=strlen(c)-2)
	{
		switch(c[i])
		{
			case '+':s[--top]+=s[top+1];break;
			case '-':s[--top]-=s[top+1];break;
			case '*':s[--top]*=s[top+1];break;
			case '/':s[--top]/=s[top+1];break;
			case '@':i=strlen(c)-1;break;
			default:x=0;while(c[i]!=' ')x=x*10+c[i++]-'0';
			s[++top]=x;break;
		}
		i++;
	}
	printf("%lld",s[top]);
	return 0;
}
