#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,m,n,i,j;
	int f[100][100];//һά�ŵ�ƻ����������ά���Ӹ��� ,ֵΪ�ŵķ����� 
	scanf("%d",&t);
	//������С�����ߴ��� 
	//��ʼ�� �߽� 
	for(i=1;i<=20;i++) f[0][i]=1;//����0��ƻ��
	for(i=1;i<=20;i++) f[i][1]=1;//1������
		
	for(i=1;i<=20;i++)
		for(j=2;j<=20;j++)
		{
			if(i<j) f[i][j]=f[i][i];//�ȼ�,��Ϊ���������Ҳ�Ų���ƻ���� 
			else f[i][j]=f[i][j-1]+f[i-j][j];//״̬ת�Ʒ���	
			//f[i][j-1]�̳���ͬƻ�������j-1�����ӵķ�������
			//f[i-j][j]�ǵ�ǰ״̬���δ�ŵ������ڵ�ǰƻ�����µķ������� 
		}
	for(int k=0;k<t;k++)//�����ѭ������������������ 
	{
		scanf("%d%d",&m,&n);
		
		printf("%d\n",f[m][n]);
	}
	return 0;
}
