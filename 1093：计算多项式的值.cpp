#include<cstdio>
using namespace std;
int main()
{
	int n;
	double x,ans=1,temp;
	scanf("%lf%d",&x,&n);
	for(int i=1;i<=n;i++){
		temp=1.0;
		for(int j=1;j<=i;j++) temp*=x;
		ans+=temp;
	}
	printf("%.2lf",ans);
    return 0;
}
