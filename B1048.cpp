/*
	Name: Êý×Ö¼ÓÃÜ 
	Copyright: 
	Author: mac
	Date: 29/08/18 10:32
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char z[13] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
int main()
{
	char A[110],B[110],C[110];
	scanf("%s %s",A,B);
	int len1 = strlen(A),len2 = strlen(B);
	int i,j;
	for(i = len2 - 1,j = len1 - 1;i >= 0 && j >= 0;i--,j--){
		if((len1 - j)%2 != 0){
			C[i] = z[(B[i] - '0'+ A[j] - '0')%13];
		}
		if((len1 - j) % 2 == 0){
			if(B[i] - A[j] >= 0){
				C[i] = B[i] - A[j] + '0';
			}else
				C[i] = (B[i] - A[j] + 10) + '0';
		}
	}
	for(; i >= 0;i--){
		C[i] = B[i];
	}
	for(int k = 0; k < len2; k++){
		printf("%c",C[k]);
	}
	
	return 0;
}

