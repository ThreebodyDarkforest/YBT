#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	long long int n,m,temp;
	scanf("%lld",&n);
	if(n<0) printf("-");
	if(n==0) printf("0");
	while(n%10==0)
		{
		    n/=10;
		    continue;
	    }
	while(n!=0)
	{
		n=abs(n);
		temp=abs(n);
        temp=n%10;
        n/=10;
		printf("%lld",temp);
	}
	return 0;
}
