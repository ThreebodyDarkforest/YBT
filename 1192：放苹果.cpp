#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,m,n,i,j;
	int f[100][100];//一维放的苹果个数，二维盘子个数 ,值为放的方法数 
	scanf("%d",&t);
	//数据量小，离线处理 
	//初始化 边界 
	for(i=1;i<=20;i++) f[0][i]=1;//都放0个苹果
	for(i=1;i<=20;i++) f[i][1]=1;//1个盘子
		
	for(i=1;i<=20;i++)
		for(j=2;j<=20;j++)
		{
			if(i<j) f[i][j]=f[i][i];//等价,因为多余的盘子也放不了苹果了 
			else f[i][j]=f[i][j-1]+f[i-j][j];//状态转移方程	
			//f[i][j-1]继承相同苹果情况下j-1个盘子的方法总数
			//f[i-j][j]是当前状态多出未放的盘子在当前苹果数下的方法总数 
		}
	for(int k=0;k<t;k++)//最外层循环控制输入数据组数 
	{
		scanf("%d%d",&m,&n);
		
		printf("%d\n",f[m][n]);
	}
	return 0;
}
