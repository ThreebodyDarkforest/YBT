#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
int main()
{
	char s[501];
	int t=0,tmp;
	int i,j;
	gets(s);
	s[strlen(s)]=' ';
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ') t++;
		else
		{
			tmp=i;
			for(j=0;j<t;j++) printf("%c",s[--tmp]);
			t=0;
			if(i!=strlen(s)) printf(" ");
		}
	}
	return 0;
}
