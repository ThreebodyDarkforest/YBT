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
	for(i=0;i<lena;i++) a[lena-i]=a1[i]-'0';//ת�������򴢴� 
	for(i=0;i<lenb;i++) b[lenb-i]=b1[i]-'0';

	for(i=1;i<=lena;i++)
	{
		x=0;
		for(j=1;j<=lenb;j++)
		{
			c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
			x=c[i+j-1]/10;//��λ 
			c[i+j-1]%=10;//�ѽ�λ����λ������λ 
		}
		c[i+lenb]=x;//����ÿ�������ĩβ�Ľ�λ���ӵ���һ��i��ѭ���� 
	}
	lenc=lena+lenb;//ÿ������һ��λ���պô�λlenb�� 
	while(c[lenc]==0&&lenc>1) lenc--;//ȥ��ǰ��0 
	for(i=lenc;i>=1;i--) 
		cout<<c[i];
	cout<<endl;
	return 0;
}

