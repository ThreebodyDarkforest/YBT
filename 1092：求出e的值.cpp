#include<cstdio>
using namespace std;
int main()
{
	int n;
	double ans=1,temp;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		temp=1.0;
		for(int j=1;j<=i;j++) temp*=j;
		ans+=1.0/temp;
	}
	printf("%.10lf",ans);
    return 0;
}
