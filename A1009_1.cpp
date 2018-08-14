#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
double p[2001];
double p1[2001];
int main()
{
	int k1,k2,count = 0;
	memset(p,0.0,sizeof(p));
	memset(p1,0.0,sizeof(p1));
	scanf("%d",&k1);
	for(int i = 0; i < k1;i++){
		int n;double a;
		scanf("%d%lf",&n,&a);
		p1[n] += a;
	}
	scanf("%d",&k2);
	while(k2--){
		int n;double a;
		scanf("%d%lf",&n,&a);
		for(int i = 0;i <= 1000;i++){
			if(p[i] != 0.0)
			p[i+n] += (a*p1[i]);
		}
	}
	for(int i = 0; i < 2001;i++){
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

