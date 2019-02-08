#include<cstdio>
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	char s[255];
	int ans=0;
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>=48&&s[i]<=57) ans++;
	}
	printf("%d",ans);
	return 0;
}
