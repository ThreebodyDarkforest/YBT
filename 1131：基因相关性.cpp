#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char ch[100001];
int main()
{
    double n,tot=0;
    char s1[501],s2[501];
    scanf("%lf",&n);
    scanf("%s%s",s1,s2);
    for(int i=0;i<strlen(s1);i++)
    {
    	if(s1[i]==s2[i]) tot++;
	}
	if((tot/strlen(s1))>=n) printf("yes");
	else printf("no");
    return 0;
}

