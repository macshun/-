/*
	Name: 个位数统计 
	Copyright: 
	Author: mac
	Date: 25/08/18 21:06
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
//	freopen("test.txt","r",stdin);
	char mp[1000];
	scanf("%s",mp);
	int count[10] = {0};
	for(int i = 0;i < strlen(mp); i++){
		count[mp[i] - '0']++;
	}
	for(int i = 0;i < 10;i++){
		if(count[i] != 0){
			printf("%d:%d\n",i,count[i]);
		}
	}
	return 0;
}

