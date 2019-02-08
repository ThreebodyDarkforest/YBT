#include<cstdio>
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	char s[100001];
	int a[127]={0};//ascii
	bool b=0;
	gets(s);
	for(int i=0;i<strlen(s);i++) a[s[i]]++;
	for(int i=0;i<128;i++)
	{
		if(a[i]==1)
		{
		printf("%c",i);
		b=1;
		break;
		}
	}
	if(b==0) printf("no");
	return 0;
}
