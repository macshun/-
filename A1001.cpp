/*
	Name: A+B Format
	Copyright: 
	Author: mac
	Date: 30/08/18 15:03
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,cnt = 0,z[10];
	scanf("%d%d",&a,&b);
	int sum = a + b;
	if(sum < 0){
		printf("-");
		sum = -sum;
	}
	do{
		z[cnt++] = sum % 10;
		sum /= 10;
	}while(sum != 0);
	for(int  k = cnt - 1;k >= 0;k--){
		printf("%d",z[k]);
		if(k > 0 && k % 3 == 0)
			printf(",");
	}
	return 0;
}

