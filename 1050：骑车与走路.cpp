#include <cstdio>
using namespace std;
int main()
{
	double n,w,b;
	scanf("%lf",&n);
	w=n/1.2;
	b=(n/3.0)+50;
	if(w>b) printf("Bike");
	else if(w<b) printf("Walk");
	        else printf("All");
	return 0;
}
