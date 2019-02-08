#include<cstdio>
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int a[10001]={0},n,r;
bool b[10001]={0};
int print()
{
	for(int i=1;i<=r;i++)
	cout<<setw(3)<<a[i];
	cout<<endl;
}
int search(int k)
{
	int i;
	for(i=1;i<=n;i++)
		if(!b[i]&&i>a[k-1])
		{
			a[k]=i;
			b[i]=1;
			if(k==r) print();
			else search(k+1);
			b[i]=0;
		}
}
int main()
{
	cin>>n>>r;
	search(1);
	return 0;
}
