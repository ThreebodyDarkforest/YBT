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
#define N 100010
#define MOD 2520
#define E 1e-12
using namespace std;
int top=0;
int main()
{
	char queue[N],a[256];
	int t;
	cin>>t;	
	getchar();
	while(t--)
	{
		top=0;
		gets(a);
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='['||a[i]=='('||a[i]=='<'||a[i]=='{'){top++;queue[top]=a[i];}
			if(a[i]==')'&&queue[top]=='('&&a[i-2]==']') top--;
			else{
				if(a[i]==')')
				{
					top++;
					queue[top]=a[i];
				}
			}
			if(a[i]==']'&&queue[top]=='['&&a[i-2]=='}') top--;
			else{
				if(a[i]==']')
				{
					top++;
					queue[top]=a[i];
				}
			}
			if(a[i]=='>'&&queue[top]=='<'&&a[i-2]==')') top--;
			else{
				if(a[i]=='>')
				{
					top++;
					queue[top]=a[i];
				}
			}
			if(a[i]=='}'&&queue[top]=='{') top--;
			else{
				if(a[i]=='}')
				{
					top++;
					queue[top]=a[i];
				}
			}
		}
	printf("%d ",top);
	if(top==0) printf("OK\n");
	else printf("Wrong\n");
	}
	
	return 0;
}
