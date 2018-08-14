#include <iostream>
#include <cstdio>
using namespace std;
int start[55],next[55],end[55];
char mp[5] = {'S','H','C','D','J'};
int main()
{
	int K;
	scanf("%d",&K);
	for(int i = 1;i < 55;i++){
		start[i] = i;
	}
	for(int i = 1;i < 55;i++){
		scanf("%d",&next[i]);
	}
	for(int step = 0;step < K;step++){
		for(int i = 1;i < 55; i++){
			end[next[i]] = start[i];
		}
		for(int i = 1;i < 55;i++){
			start[i] = end[i];
		}
	}
	for(int i = 1;i < 55; i++){
		if(i != 1)printf(" ");
		start[i]--;
		printf("%c%d",mp[start[i]/13],start[i]%13+1);
	}
	return 0;
}

