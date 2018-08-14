#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int N,M;
	scanf("%d%d",&N,&M);
	int A[N+1];
	for(int i = 1;i < N+1;i++){
		scanf("%d",&A[i]);
	}
	for(int i = 0;i < M;i++){
		A[0] = A[N];
		for(int j = N;j >= 1;j--){
			A[j] = A[j-1];
		}
	}
	for(int i = 1;i < N+1;i++){
		printf("%d",A[i]);
		if(i != N)
			printf(" ");
	}
	printf("\n");
	return 0;
}

