#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[2500];
	int k;
	int len;
	int max_len=0,max_position;
	int sum=0;
	int i;
 
	gets(s);//?????
	len=strlen(s)-1;//?????
 
	for(i=0;i<=len;i++)
	{
		if(s[i]!=' '&&s[i]!='.')	sum++;//????????,????
		else if(sum>0)
		{
			if(sum>max_len)//?????????????
			{
				max_len=sum;//????????
				max_position=i-sum;//??????????
			}
			sum=0;//????
		}
	}
	for(i=max_position;i<=max_len+max_position-1;i++)
		cout<<s[i];
 
	cout<<endl;
	return 0;
}

