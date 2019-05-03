#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 101
#define MOD 2520
#define E 1e-12
using namespace std;
int zh(int x)
{
	int ans=0;
	while(x)
	{
		if(x%2) ans++;
		x/=2;
	}
	return ans;
}
int main()
{
	int n;
	while(cin>>n&&n)
	{	
		int tmp=zh(n);
		for(int i=n+1;;i++)
		{
			if(tmp==zh(i))
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
