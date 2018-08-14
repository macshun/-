/*
	Name: 组合数的和 
	Copyright: 
	Author: mac
	Date: 09/09/18 17:29
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num[11],count = 0;
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&num[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				count += (num[i]*10 + num[j]);
			}
		}
	}
	printf("%d\n",count);
	return 0;
}

