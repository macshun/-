#include <iostream>
#include <cstdio>
#include <cstring>
const int maxn = 100000;
int school[maxn];
using namespace std;
int main()
{
	freopen("B1032.txt","r",stdin);
	memset(school,0,sizeof(school));
	int max,j;
	int N,num,result;
	scanf("%d",&N);
	while(N--){
		scanf("%d%d",&num,&result);
		school[num] += result;
	}
	max = -1;
	for(int i = 1;i < maxn ;i++){
		if(school[i]>max){
			max = school[i];
			j = i;
		}
	}
	printf("%d %d",j,max);
	return 0;
}

