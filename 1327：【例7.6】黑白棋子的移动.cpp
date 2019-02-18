#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
char a[101];
int sp,step=0,n;
void print()
{
	printf("step%2d:",step);
	for(int i=0;i<2*n+2;i++) printf("%c",a[i]);
	printf("\n");
	step++;
}
void move(int k)
{
	int j;
	for(j=0;j<2;j++)
	{
		a[sp+j]=a[k+j-1];
		a[k+j-1]='-';
	}
	sp=k-1;
	print();
}
void mv(int n)
{
	int i,k;
	if(n==4)
	{
		move(4);move(8);move(2);move(7);move(1);
	}
	else
	{
		move(n);move(n*2-1);mv(n-1);
	}
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++) a[i]='o';
	for(i=n;i<2*n;i++) a[i]='*';
	a[2*n]='-';a[2*n+1]='-';
	sp=2*n;
	print();
	mv(n);
	return 0;
}
