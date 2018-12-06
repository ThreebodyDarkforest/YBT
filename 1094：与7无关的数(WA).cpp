#include<cstdio>
using namespace std;
int main()
{
	long long int n,ans=0;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
			int y=1;//1 is true
		    for(int j=1;j<=i;j++){
			int temp=0,x;
			x=i;
			temp=x%10;
			x/=10;
			if(temp==7) y=0;
		    }
		    if(y==1||i%7!=0) ans+=i*i;
		    else printf("%d ",i);
	}
	printf("%lld",ans);
    return 0;
}
