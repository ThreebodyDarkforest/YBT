#include <cstdio>
using namespace std;
int main()
{
	int n;
	double a[101],sum;
	scanf("%d",&n);
	for(int asshole=0;asshole<n;asshole++){
		scanf("%lf",&a[asshole]);
		sum+=a[asshole];
	}
	printf("%.4lf",sum/n);
	return 0;
}
