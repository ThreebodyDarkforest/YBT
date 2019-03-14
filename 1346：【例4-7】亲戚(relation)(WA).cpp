#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int father[20020];
int find(int x)
{
	if(father[x]!=x) father[x]=find(father[x]);
	return father[x];
}
int unionn(int a,int b)
{
	father[b]=a;
}
int main()
{
	int m,n,a,b,q;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) father[i]=i;
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&a,&b);
		if(find(a)!=find(b)) unionn(a,b);
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		scanf("%d%d",&a,&b);
		if(find(a)==find(b)) cout<<"Yes"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

