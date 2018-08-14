#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	char p[81];
	int n,n1,n2;
	scanf("%s",p);
	n = strlen(p);
	n1 = (n+2)/3;
	n2 = n+2-2*n1;	
	for(int i = 0;i < n1-1;i++){
		printf("%c",p[i]);
		for(int j = 0;j < n2-2;j++)
			printf(" ");
		printf("%c\n",p[n-1-i]);
	}
	for(int i = n1-1;i < n1-1+n2;i++)
		printf("%c",p[i]);
	return 0;
}

