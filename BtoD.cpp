#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
//	int n,k;
//	int cnt = 0,num[100];
//	scanf("%d%d",&n,&k);
//	do{
//		num[cnt++] = n%k;
//		n /= k;
//	}while(n != 0);
//	for(int i = cnt - 1; i >= 0; i--){
//		printf("%d",num[i]);
//	}
	double n1;
	scanf("%lf",&n1);
	do{
		n1 = n1*8;
		if(n1 >= 1.0){
			int temp = n1;
			printf("%d",int(temp));
			n1 -= int(temp);
		}else 
			printf("0");		
	}while(n1 != 0.0);
	return 0;
}

