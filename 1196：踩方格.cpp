#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
//̫ɧ������� 
//l��ʾ���һ��������߹����ĵ�
//r��ʾ���һ�����ұ��߹����ĵ�
//u��ʾ���һ���������߹����ĵ� 
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
		l[i]=l[i-1]+u[i-1];//�������������˲����ұ� 
		r[i]=r[i-1]+u[i-1];//���ұ���������˲������ 
		u[i]=u[i-1]+l[i-1]+r[i-1];
	}
	ans=r[n-1]+l[n-1]+u[n-1];
	printf("%d",ans);
	return 0;
}
