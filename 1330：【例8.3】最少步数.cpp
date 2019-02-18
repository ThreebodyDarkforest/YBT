#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
int dir[12][2]={{1,2},{-1,2},{2,1},{-2,1},{-1,-2},{-2,-1},{1,-2},{-1,-2},{2,2},{-2,2},{2,-2},{-2,-2}};
using namespace std;
int main()
{
	int s[101][101],que[10000][4]={0},x1,y1,x2,y2;
	memset(s,0xff,sizeof(s));
	int head=1,tail=1;
	que[1][1]=1;que[1][2]=1;que[1][3]=0;
	cin>>x1>>y1>>x2>>y2;
	while(head<=tail)
	{
		for(int d=0;d<=11;d++)
		{
			int x=que[head][1]+dir[d][0];
			int y=que[head][2]+dir[d][1];
			if(x>0&&y>0)
			 if(s[x][y]==-1)
			 {
			 	s[x][y]=que[head][3]+1;
			 	tail++;
			 	que[tail][1]=x;
			 	que[tail][2]=y;
			 	que[tail][3]=s[x][y];
			 	if(s[x1][y1]>0&&s[x2][y2]>0)
			 	{
			 		cout<<s[x1][y1]<<endl;
			 		cout<<s[x2][y2]<<endl;
			 		return 0;
				}
			 }
		}
		head++;
	}
}
