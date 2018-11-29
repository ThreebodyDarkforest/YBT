#include<cstdio>
using namespace std;
int main()
{
	char a[100];
	int i=0;
	while((a[i++]=getchar())!='\n');
	for(int j=0;j<i;j++){
		if((a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122)){
			if(a[j]=='z'){
			a[j]='a';a[j]--;
		}
		if(a[j]=='Z'){
			a[j]='A';a[j]--;
		} 
		a[j]++;
		printf("%c",a[j]);
		}
		else{
		printf("%c",a[j]);
		}
	}
	return 0;
}
