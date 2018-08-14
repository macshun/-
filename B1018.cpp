#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("B1018.txt","r",stdin);
	int n,c1 = 0,c2 = 0,c3 = 0,max_j = 0,max_y = 0,id0,id1;
	int win[6]={0};
	char j,y,ss[6] = {'C','J','B','C','J','B'};
	scanf("%d",&n);
	while(n--){
		getchar();
		scanf("%c %c",&j,&y);
		if(j == y)
			c3++;
		else
		if(j == 'C'&& y == 'J'){
			c1++;
			win[0]++;
		}else
		if(j == 'C'&& y == 'B'){
			c2++;
			win[5]++;
		}else
		if(j == 'J'&& y == 'C'){
			c2++;
			win[3]++;
		}else
		if(j == 'J'&& y == 'B'){
			c1++;
			win[1]++;
		}else
		if(j == 'B'&& y == 'C'){
			c1++;
			win[2]++;
		}else
		if(j == 'B'&& y == 'J'){
			c2++;
			win[4]++;
		}
	}
	printf("%d %d %d\n",c1,c3,c2);
	printf("%d %d %d\n",c2,c3,c1);
	for(int i = 0;i < 3;i++){
		if(max_j <= win[i]){
			max_j = win[i];
			id0 = i;
		}
	}
	for(int i = 3;i < 6;i++){
		if(max_y<=win[i]){
			max_y = win[i];
			id1 = i;
		}
	}
	printf("%c %c\n",ss[id0],ss[id1]);
	return 0;
}

