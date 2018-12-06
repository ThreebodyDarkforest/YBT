#include <cstdio>
using namespace std;
int main()
{
	long long int n,temp;
	scanf("%lld",&n);
	while(n!=0)
	{
		temp=n;
        temp=n%10;
        n/=10;
		printf("%lld ",temp);
	}
	return 0;
}
