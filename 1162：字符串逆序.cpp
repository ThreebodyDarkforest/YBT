#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a[100001];
	int i=0,j;
	while((a[i++]=getchar())!='!');
	for(j=i-2;j>=0;j--) printf("%c",a[j]);
	return 0;
}
