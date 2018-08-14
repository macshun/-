/*
	Name: »ØÎÄ´® 
	Copyright: 
	Author: mac 
	Date: 24/08/18 17:29
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char str[256];
	bool flag = true;
	scanf("%s",str);
	int len = strlen(str);
	for(int i = 0;i < len;i++){
		if(str[i] != str[len - i - 1]){
			flag = false;
		}
	}
	if(flag == true){
		printf("YES");
	}else
		printf("NO");
	return 0;
}

