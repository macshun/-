/*
	Name: Colors in Mars
	Copyright: 
	Author: mac
	Date: 23/08/18 12:18
	Description: 
*/
#include <cstdio>
char num[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};
int main()
{
	int r,g,b;
	scanf("%d%d%d",&r,&g,&b);
	printf("#");
	printf("%c%c%c%c%c%c",num[r/13],num[r%13],num[g/13],num[g%13],num[b/13],num[b%13]);
	return 0;
}

