#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int Max = 100000;
int dis[Max+2],A[Max+2];
int main()
{
	int N,M,sum = 0,left,right;
	scanf("%d",&N);
	for(int i = 1;i <= N;i++){
		scanf("%d",&A[i]);
		sum += A[i];
		dis[i] = sum;
	}
	scanf("%d",&M);
	for(int i = 0;i < M;i++){
		scanf("%d%d",&left,&right);
		if(left > right) 
			swap(left,right);
		int temp = dis[right - 1] - dis[left - 1];
		printf("%d\n",min(temp,sum - temp));
	}
	return 0;
}

