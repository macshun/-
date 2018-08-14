#include <iostream>
#include <cstdio>
using namespace std;
struct birthday{
	char name[6];
	int year;
	int month;
	int day;
	birthday(int _year,int _month,int _day){
		year = _year;
		month = _month;
		day = _day;
	}
	birthday(){}
}temp,youngest,oldest;
int main()
{
	int n,count = 0;
	youngest = birthday(1814,9,6);
	oldest = birthday(2014,9,6);
	scanf("%d",&n);
	while(n--){
		scanf("%s %d/%d/%d",temp.name,&temp.year,&temp.month,&temp.day);
		if(temp.year < 2014 &&temp.year > 1814){
			if(temp.year > youngest.year){
				youngest = temp;
			}
			if(temp.year < oldest.year){
				oldest = temp;
			}
			count++;
		}else
		if(temp.year == 2014 && temp.month < 9){
			youngest = birthday(2014,1,1);
		
			if(temp.month > youngest.month){
				youngest = temp;
			}
			
			count ++;
		}else
		if(temp.year == 2014 && temp.month == 9 && temp.day <= 6){
			youngest = birthday(2014,9,1);
		
			if(temp.day >= youngest.day){
				youngest = temp;
			}
			
			count++;
		}else
		if(temp.year == 1814 && temp.month > 9){
			oldest = birthday(1814,12,31);
			if(temp.month < oldest.month){
				oldest = temp;
			}
			count++;
		}else
		if(temp.year == 1814 && temp.month == 9 && temp.day >= 6){
			oldest = birthday(1814,9,30);
			if(temp.day <= oldest.day){
				oldest = temp;
			}
			count++;
		}
	}
	if(count == 0){
		printf("0\n");
	}
	printf("%d %s %s\n",count,oldest.name,youngest.name);
	return 0;
}

