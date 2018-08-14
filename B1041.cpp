#include <iostream>
#include <cstdio>
using namespace std;
struct inf{
	long long id;
	int examSeat;
}stu[1010];
int main(){
	int N,M,examSeat,seat;
	long long id;
	scanf("%d",&N);
	for(int i = 1 ;i < N;i++){
		scanf("%lld%d%d",&id,&seat,&examSeat);
		stu[seat].id = id;
		stu[seat].examSeat = examSeat;
	}
	scanf("%d",&M);
	while(M--){
		scanf("%d",&seat);
		printf("%lld %d\n",stu[seat].id,stu[seat].examSeat);
	}
	return 0;
}

