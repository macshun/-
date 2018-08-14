/*
	Name: ‘⁄ªÙ∏ÒŒ÷¥ƒ’“¡„«Æ
	Copyright: 
	Author: mac
	Date: 21/08/18 16:36
	Description: 
*/

#include <iostream>
#include <cstdio>
using namespace std;
const int Galleon = 17*29;
const int Sickle = 29;
int main()
{
	int pg,ps,pk,ag,as,ak; 
	scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,&ag,&as,&ak);
	int price = pg*Galleon + ps*Sickle + pk;
	int pay = ag*Galleon + as* Sickle + ak;
	int change = pay - price;
	if(change < 0){
		printf("-");
	}
	printf("%d.%d.%d",change / Galleon,change % Galleon / Sickle,change % Sickle);
	return 0;
}

