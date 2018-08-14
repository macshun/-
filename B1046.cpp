#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int j,jh,y,yh,N,yd = 0,jd = 0;
	scanf("%d",&N);
	while(N--){
		scanf("%d%d%d%d",&j,&jh,&y,&yh);
		if(jh == j + y && yh != j + y ){
			yd++;
		}
		if(jh != j + y && yh == j + y){
			jd++;
		}
	}
	printf("%d %d",jd,yd);
	return 0;
}

