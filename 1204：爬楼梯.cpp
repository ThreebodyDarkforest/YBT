#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int fun(int x)
{
	if(x==1||x==2||x==3) return x;
	else return fun(x-1)+fun(x-2);
}
int main()
{
	int n;
	while(cin>>n)
	printf("%d\n",fun(n));
	return 0;
}
