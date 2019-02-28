#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#define N 101
using namespace std;
int main()
{
	char a1[N],b1[N];
	int a[N],b[N],c[2*N+10],i,j,x,lena,lenb,lenc;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	scanf("%s",a1);
	scanf("%s",b1);
	lena=strlen(a1);lenb=strlen(b1);
	for(i=0;i<lena;i++) a[lena-i]=a1[i]-'0';//转换并倒序储存 
	for(i=0;i<lenb;i++) b[lenb-i]=b1[i]-'0';

	for(i=1;i<=lena;i++)
	{
		x=0;
		for(j=1;j<=lenb;j++)
		{
			c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
			x=c[i+j-1]/10;//进位 
			c[i+j-1]%=10;//已进位，该位保留个位 
		}
		c[i+lenb]=x;//保留每次运算的末尾的进位，加到下一次i的循环中 
	}
	lenc=lena+lenb;//每次运算一错位，刚好错位lenb次 
	while(c[lenc]==0&&lenc>1) lenc--;//去除前导0 
	for(i=lenc;i>=1;i--) 
		cout<<c[i];
	cout<<endl;
	return 0;
}

