#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,as=0,b,bs=0,c,cs=0,tot=0;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		as+=a;bs+=b;cs+=c;
	}
	tot=as+bs+cs;
	printf("%d %d %d %d",as,bs,cs,tot);
	return 0;
}
