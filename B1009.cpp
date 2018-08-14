/*
	Name: Ëµ·´»° 
	Copyright: 
	Author: mac 
	Date: 24/08/18 17:43
	Description: 
*/
#include <cstdio>
#include <cstring>
int main()
{
	char str[90][90];
	int cnt = 0;
	freopen("test.txt","r",stdin);
	while(scanf("%s",str[cnt]) != EOF){
		cnt++;
	}
	for(int i = cnt - 1;i >= 0;i--){
		printf("%s",str[i]);
		if(i != 0){
			printf(" ");
		}
	}
	return 0;
}

