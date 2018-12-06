#include<cstdio>
#include<cmath>
using namespace std;
bool pd(int x);
bool pd(int x)
{
	if(x==2) return 1;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return 0;
	} //0为不是素数，1为是 
    return 1;
}
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
		if(pd(i)==1) ans++;
	printf("%d",ans);
	return 0;
}
