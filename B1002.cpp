/*
	Name: 写出这个数 
	Copyright: 
	Author: mac
	Date: 26/08/18 10:14
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char str[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"}; 
int main()
{
	char p[110];
	int last = 0;
	scanf("%s",p);
	int len = strlen(p);
	for(int i = 0;i < len;i++){
		last += (p[i] - '0');
	}
	if(last / 100 != 0){
		printf("%s ",str[last/100]);	
		printf("%s ",str[last % 100 / 10]);
	}else
	if(last % 100 / 10 != 0)
		printf("%s ",str[last % 100 / 10]);
	printf("%s\n",str[last%10]);
	return 0;
}

