#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
char x,y,z;
void mov(int n,char a,char c,char b)
{
	if(n==0) return;
	mov(n-1,a,b,c);
	cout<<a<<"-->"<<n<<"-->"<<c<<endl;
	mov(n-1,b,c,a);
}
int main()
{
	cin>>n;
	cin>>x>>y>>z;
	mov(n,x,y,z);
	return 0;
}
