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
int main()
{
	int a,b,c,i=0;
	while(cin>>a>>b)
	{
		if(a==0&&b==0) return 0;
		if(a<b) swap(a,b);
		while(a/b<2)
        {
            c=a;
            a=b;
            b=c%b;
            i++;
        }
        if(i%2==1) cout<<"lose"<<endl;
		else cout<<"win"<<endl;
	} 
	return 0;
} 
