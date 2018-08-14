/*
	Name: 科学计数法 
	Copyright: 
	Author: mac
	Date: 27/08/18 17:04
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
const int max_n = 10010;
char a[max_n];
int main()
{
	scanf("%s",a);
	if(a[0] == '-')
		printf("-");
	int len = strlen(a);
	int i,z = 0,pro = 1;
	for(i = len - 1; i >= 1; i--){
		if(a[i] != '+' && a[i] != '-'){
			z += (a[i] - '0')*pro;
			pro = pro*10;
		}else
			break;
	}
		if(z == 0){
			for(int k = 1; k < len; k++){
				if(a[k] == 'E')
					break;
				printf("%c",a[k]);
			}
		}
		
		if(a[i] == '+'){
			int num = 0;
			printf("%c",a[1]);
			for(int j = 3;j < i-1; j++){
				num++;
				printf("%c",a[j]);
				if(i-4 > z && z == num){
					printf(".");
				}
				
			}
			for(int j = 0;j < z-(i-4); j++){
				printf("0");
			}
		}
		if(a[i] == '-'){
			printf("0.");
			for(int j = 0; j < z-1; j++){
				printf("0");
			}
			printf("%c",a[1]);
			for(int j = 3; j < i-1; j++){
				printf("%c",a[j]);
			}
		}
	
	return 0;
}

