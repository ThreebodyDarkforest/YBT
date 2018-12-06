#include <cstdio>
using namespace std;
int main()
{
	int n;
	double a[101],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	printf("%.2lf",sum/n);
	return 0;
}
