#include <iostream>
#include <cstdio>
using namespace std;
struct student{
	int grade;
	char name[12],id[12],gender;
}temp,highest,lowest;
int main()
{
	int n,cn1 = 0,cn2 = 0;
	scanf("%d",&n);
	highest.grade = -1;
	lowest.grade = 101;
	while(n--){
		scanf("%s %c %s %d",temp.name,&temp.gender,temp.id,&temp.grade);
		if(temp.gender == 'M'){
			if(temp.grade < lowest.grade)
				lowest = temp;
			cn1++;
		}
		if(temp.gender == 'F'){
			if(temp.grade > highest.grade)
				highest = temp;
			cn2++;
		}
	}
	if(cn2 == 0)
		printf("Absent\n");
	else
		printf("%s %s\n",highest.name,highest.id);
	if(cn1 == 0)
		printf("Absent\n");
	else
		printf("%s %s\n",lowest.name,lowest.id);
	if(cn1 != 0&&cn2 != 0){
		printf("%d\n",highest.grade - lowest.grade);
	}else
		printf("NA\n");
		
	return 0;
}

