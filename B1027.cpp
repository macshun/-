#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int n,x;
	char c;
	scanf("%d %c",&n,&c);
	x = (int)sqrt(2*n+2)-1;
	if(x % 2 == 0)
		x--;
	for(int i = x;i >= 1;i-=2){
		for(int j = 0;j < (x - i)/2;j++){
			printf(" ");
		}
		for(int j = 0;j < i;j++)
			printf("%c",c);
		printf("\n");
	}
	for(int i = 3;i <= x;i+=2){
		for(int j = 0;j < (x - i)/2;j++){
			printf(" ");
		}
		for(int j = 0;j < i;j++)
			printf("%c",c);
		printf("\n");
	}
	printf("%d\n",n-(1+x)*(1+x)/2+1);
	return 0;
}

