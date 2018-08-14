#include <cstdio>
int main()
{
	int T,count = 0;
	long long A,B,C;
	scanf("%d",&T);
	while(T--){
		scanf("%ld%ld%ld",&A,&B,&C);
		count++;
		if( A+B>C){
			printf("Case #%d: true",count);
		}
		else
			printf("Case #%d: false",count);
	}
	return 0;
}

