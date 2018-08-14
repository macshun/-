/*
	Name: mac
	Copyright: 
	Author: 
	Date: 19/08/18 22:01
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,d,z[35],num = 0;	
	scanf("%d%d%d",&a,&b,&d);
	int sum = a+b;
	do{
		z[num++] = sum % d;
		sum = sum / d;
	}while(sum != 0);
	for(int i = num-1 ;i >= 0; i--){
		printf("%d",z[i]);
	}
	return 0;
}

