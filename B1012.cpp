#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
//	freopen("B1012.txt","r",stdin);
	int N,x;
	int A[5],count[5];
	memset(A,0,sizeof(A));
	memset(count,0,sizeof(count));
	scanf("%d",&N);
	while(N--){
		scanf("%d",&x);
		if(x % 10 == 0){
			A[0] += x;
			count[0]++;
		}else
		if(x % 5 == 1){
			if(count[1] % 2 == 0){
				A[1] += x;
			}else
				A[1] -= x;
			count[1]++;
		}else
		if(x % 5 == 2){
			count[2]++;
		}else
		if(x % 5 == 3){
			A[3] +=x;
			count[3]++;
		}else
		if(x % 5 == 4){
			if(x > A[4])
				A[4] = x;
			count[4]++;
		}
	}
	if(count[0] == 0)
		printf("N ");
	else
		printf("%d ",A[0]);
	if(count[1] != 0)
		printf("%d ",A[1]);
	else
		printf("N ");
	if(count[2] != 0)
		printf("%d ",count[2]);
	else
		printf("N ");
	if(count[3] != 0){
		printf("%.1f ",(double)A[3]/count[3]);
	}else
		printf("N ");
	if(count[4] != 0){
		printf("%d",A[4]);
	}else
		printf("N");
	return 0;
}

