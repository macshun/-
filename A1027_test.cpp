/*
	Name: 
	Copyright: 
	Author: mac 
	Date: 23/08/18 20:27
	Description: 其他进制数转为十进制 
*/

#include <iostream>
#include <cstdio>
using namespace std;
char num[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main()
{
	long long r;
	int y = 0,p = 1,radix,cnt = 0;
	char repo[10];
	scanf("%lld%d",&r,&radix);
	while(r != 0){
		y = y + (r % 10)*p;
		r /= 10;
		p = p*radix;
	}
		printf("%d\n",y);
	do{
		repo[cnt++] = num[y % 16];
		y /= 16;
	}while(y != 0);
	for(int i = cnt - 1;i >= 0;i--){
		printf("%c",repo[i]);
	}
	return 0;
}

