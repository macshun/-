/*
	Name: Kuchiguse
	Copyright: 
	Author: mac
	Date: 04/09/18 17:28
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char kuc[110][270];
int main()
{
	freopen("test.txt","r",stdin);
	int n,minlen = 270,ans = 0;
	scanf("%d",&n);
	getchar();
	for(int i = 0;i < n;i++){
		gets(kuc[i]);
		int len = strlen(kuc[i]);
		if(minlen > len) minlen = len;
		for(int j = 0;j < len/2;j++){
			char temp = kuc[i][j];
			kuc[i][j] = kuc[i][len - j - 1];
			kuc[i][len - j - 1] = temp;
		}
	}
	for(int i = 0;i < minlen;i++){
		char c = kuc[0][i];
		int flag = 1;
		for(int j = 1;j < n;j++){
			if(c != kuc[j][i]){
				flag = 0;
				break;
			}
		}
		if(flag){
			ans++;
		}else
			break;
	}
	if(ans == 0)
		printf("nai");
	else{
		for(int i = ans - 1;i >= 0;i--){
			printf("%c",kuc[0][i]);
		}
	}
	return 0;
}

