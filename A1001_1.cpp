/*
	Name: A + B Format
	Copyright: 
	Author: mac
	Date: 30/08/18 15:29
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int sum = a + b;
	if(sum < 0){
	  printf("-");
	  sum = -sum;
	}
	if(sum >= 1000000)
		printf("%d,%03d,%03d",sum / 1000000,sum % 1000000 / 1000,sum % 1000);
	else if(sum >= 1000) 
		printf("%d,%03d",sum / 1000,sum % 1000);
	else printf("%d",sum);
	return 0;
}

