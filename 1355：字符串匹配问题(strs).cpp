#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<utility>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#define PI acos(-1.0)
#define E 1e-9
#define INF 0x3f3f3f3f
#define N 300
using namespace std;
int b[N];
char a[N];
char c[]={'{','[','(','<','}',']',')','>'};
stack<int> s;

using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		while(!s.empty()) s.pop();
		bool flag=1;
		cin>>a;
		int len=strlen(a);
		for(int i=0;i<len;i++)
		 for(int j=0;j<8;j++)
		  if(a[i]==c[j])
		  {
		  	b[i]=j;
		  	break;
		  }
		
		for(int i=0;i<len;i++)
		{
			if(b[i]<=3)
			{
				if(!s.empty()&&b[i]<s.top())
				{
					flag=false;
					break;
				}
				else s.push(b[i]);
			}
			else if(b[i]>=4)
			{
				if(s.empty()||(s.top()+4)!=b[i])
				{
					flag=false;
					break;
				}
				else s.pop();
			}	
		}
		if(!s.empty()) printf("NO\n");
		else if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
