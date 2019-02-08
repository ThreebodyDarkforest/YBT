#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
void fun(int x)
{
	int tmp=x;
	while(tmp>0)
	{
		if(tmp==1)
		{
			printf("2(0)");
			tmp--;
		}
		else
		{
			int t=0,i=1;
			while(tmp>=i)
			{
				i*=2;
				t++;
			}
			printf("2(%d)",t-1);
			tmp-=(i/2);
			if(tmp!=0) printf("+");
		}
	}
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
	return 0;
}
