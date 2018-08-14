#include <stdio.h>
const int maxn = 201;
int N[maxn] = {0};
int main()
{
//	freopen("test.txt","r",stdin);
	int n,x,j;
	while(scanf("%d",&n) != EOF){
		for(int i = 0; i < n;i++){
				scanf("%d",&N[i]);
		}
		scanf("%d",&x);
		for(j = 0;j < n;j++){
			if(N[j] == x){
				printf("%d\n",j);
				break;
			}
		}
		if(j == n){
			printf("-1\n");
		}
	}
	return 0;
}

