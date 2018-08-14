/*
	Name: Spell It Right
	Copyright: 
	Author: mac
	Date: 30/08/18 15:42
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char z[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
int main()
{
	char num[100];
	scanf("%s",num);
	int len = strlen(num),count = 0;
	int num1[5],cnt = 0;
	for(int i = 0; i < len; i++){
		count += (num[i]-'0');
	}
	do{
		num1[cnt++] = count % 10;
		count /= 10;
	}while(count != 0);
	for(int i = cnt - 1; i >= 0; i--){
		printf("%s",z[num1[i]]);
		if(i != 0)
			printf(" ");
	}
	return 0;
}

