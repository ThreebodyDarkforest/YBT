#include<cstdio>
#include<algorithm>
using namespace std;
struct student
{
	int code,score;
}a[101];
int main()
{
	int k,n;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d%d",&a[i].code,&a[i].score);
	sort(a[0].score,a[n-1].score);
	printf("%d",a[k].score);
	return 0;
}
