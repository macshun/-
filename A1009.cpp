#include <cstdio>
double p[2001];
struct Poly{
	int exp;
	double cof;
}poly[1001];
int main()
{
	int k1,k2,count = 0;
	scanf("%d",&k1);
	for(int i = 0; i < k1;i++){
		scanf("%d%lf",&poly[i].exp,&poly[i].cof);
	}
	scanf("%d",&k2);
	while(k2--){
		int n;
		double a;
		scanf("%d%lf",&n,&a);
		for(int i = 0;i < k1;i++){
			p[n+poly[i].exp] += (a*poly[i].cof);
		}
	}
	for(int i = 0; i < 2001 ;i++){
		if(p[i] != 0.0)
			count++;
	}
	printf("%d",count);
	for(int i = 2000; i>=0; i--){
		if(p[i] != 0.0)
			printf(" %d %.1f",i,p[i]);
	}
	return 0;
}

