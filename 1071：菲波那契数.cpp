#include <cstdio>
using namespace std;
int main()
{
	int n,f1=1,f2=1,fn=1;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	printf("%d",fn);
	return 0;
}
