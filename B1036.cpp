#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	for(int i = 0;i < n;i++){
		printf("%c",c);
	}
	printf("\n");
	for(int i = 0;i < round(n/2.0)-2;i++){
		for(int j = 0;j < n;j++){
			if(j == 0 || j == n-1)
				printf("%c",c);
			else
				printf(" ");
		}
		printf("\n");
	}
	for(int i = 0;i < n;i++){
		printf("%c",c);
	}
	return 0;
}

