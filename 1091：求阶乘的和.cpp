#include<cstdio>
using namespace std;
int main()
{
	int n,ans=0,temp;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		temp=1;
		for(int j=1;j<=i;j++) temp*=j;
		ans+=temp;
	}
	printf("%d",ans);
    return 0;
}
