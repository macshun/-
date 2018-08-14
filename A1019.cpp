/*
	Name: General Palindromic Number
	Copyright: 
	Author: mac
	Date: 23/08/18 12:16
	Description: 进制转换，回文问题 
*/

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	bool a = true;
	int n,b,z[32],k = 0;
	scanf("%d%d",&n,&b);
	do{
		z[k++] = n % b;
		n = n / b;
	}while(n != 0);
	for(int i = 0;i <= k/2;i++){
		if(z[i] != z[k-i-1])
			a = false;
	}
	if(a == true)
		printf("Yes\n");
	else
		printf("No\n");
	for(int i = k - 1;i >= 0;i--){
		printf("%d",z[i]);
		if(i != 0)
			printf(" ");
	}
		
	return 0;
}

