#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
//太骚了这道题 
//l表示最后一步从左边走过来的点
//r表示最后一步从右边走过来的点
//u表示最后一步从下面走过来的点 
int l[21],r[21],u[21];
int ans;
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n==1){
		printf("3");return 0;
	}
	l[0]=1;r[0]=1;u[0]=1;
	for(i=1;i<=20;i++)
	{
		l[i]=l[i-1]+u[i-1];//从左边走来，因此不加右边 
		r[i]=r[i-1]+u[i-1];//从右边走来，因此不加左边 
		u[i]=u[i-1]+l[i-1]+r[i-1];
	}
	ans=r[n-1]+l[n-1]+u[n-1];
	printf("%d",ans);
	return 0;
}
