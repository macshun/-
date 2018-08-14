#include <cstdio>
const int max = 1000;
double polynomial[max+5] = {0};
int main()
{
	int k,n,count = 0;
	double a;
	scanf("%d",&k);
	while(k--){
		scanf("%d%lf",&n,&a);
		polynomial[n] += a;
	}
	scanf("%d",&k);
	while(k--){
		scanf("%d%lf",&n,&a);
		polynomial[n] += a;
	}
	for(int i = 0;i < max; i++){
		if(polynomial[i] != 0){
			count++;
		}
	}
	printf("%d",count);
	for(int i = max;i >= 0;i--){
		if(polynomial[i] != 0){
			printf("%d %.1f",i,polynomial[i]);
		}
	}
	return 0;
}

