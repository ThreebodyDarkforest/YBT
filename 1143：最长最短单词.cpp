#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[10000];
	int len;
	int sum=0,max_len=0,min_len=9999;
	int max_position,min_position;
	int i;
 
	gets(s);
	len=strlen(s);
	s[len]=' ';
 
	for(i=0;i<len;i++)
	{
		if(s[i]!=' '&&s[i]!=',')	sum++;
		else if(sum>0)
		{
			if(sum>max_len)
			{
				max_len=sum;
				max_position=i-sum;
			}
			if(sum<min_len)
			{
				min_len=sum;
				min_position=i-sum;
			}
			sum=0;
		}
	}
 
	for(i=max_position;i<=max_position+max_len-1;i++)
		cout<<s[i];
	cout<<endl;
	for(i=min_position;i<=min_position+min_len-1;i++)
		cout<<s[i];
 
	return 0;
}

