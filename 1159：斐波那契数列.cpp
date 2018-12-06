#include<cstdio>
using namespace std;
int fun(int);
int fun(int x)
{
	if(x==2||x==3) return 1;
	else if(x==1) return 0;
	else return fun(x-1)+fun(x-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
