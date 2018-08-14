#include <iostream>
#include <cstdio>
using namespace std;
struct sign{
	char id[16];
	int hh,mm,ss;
	sign(){}
	sign(int _hh,int _mm,int _ss){
		hh = _hh;
		mm = _mm;
		ss = _ss;
	}
}temp,first,last;
bool judge(sign a,sign b){
	if(a.ss != b.ss) return a.ss > b.ss;
	else if(a.mm != b.mm) return a.mm > b.mm;
	else return a.ss > b.ss;
}
int main()
{
	int M;
	scanf("%d",&M);
	first = sign(24,60,60);
	last = sign(0,0,0);
	while(M--){
		scanf("%s%d:%d:%d",temp.id,&temp.hh,&temp.mm,&temp.ss);
		if(judge(first,temp)) first = temp;
		scanf("%d:%d:%d",&temp.hh,&temp.mm,&temp.ss);
		if(judge(temp,last)) last = temp;
	}
	printf("%s %s\n",first.id,last.id);
	return 0;
}

