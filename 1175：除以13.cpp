#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	char a1[100];
	int a[100],c[100],lena,x=0,lenc;
	memset(a,0,sizeof(a));
	memset(c,0,sizeof(c));
	gets(a1);
	lena=strlen(a1);
	for(int i=0;i<lena;i++) a[i+1]=a1[i]-'0';
	for(int i=1;i<=lena;i++)
	{
		c[i]=(x*10+a[i])/13;//��һλ����*10������һλ��������c[i]��Ϊ��һ�������� 
		x=(x*10+a[i])%13;//xΪÿλ��������ʱ����
	}
	lenc=1;
	while(c[lenc]==0&&lenc<lena) lenc++;
	for(int i=lenc;i<=lena;i++) 
		cout<<c[i];
		cout<<endl;
		cout<<x;
	cout<<endl;
	return 0;
}
