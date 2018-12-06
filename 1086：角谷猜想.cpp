#include <cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	do{
	if(n%2==0){
		n/=2;
		printf("%d/2=%d\n",n*2,n);	

	}else if(n%2==1) {
    n=n*3+1;
    printf("%d*3+1=%d\n",(n-1)/3,n);
    }
	}while(n!=1);
	printf("End");
	return 0;
}
