#include <iostream>
#include <cstdio>
using namespace std;
typedef struct Student{
	char name[11];
	char num[11];
	int result;
}Stu;
int main()
{
	int n,max = -1,min = 101,max_i,min_i;
	scanf("%d",&n);
	Stu student[n];
	for(int i = 0;i < n;i++){
		scanf("%s%s%d",student[i].name,student[i].num,&student[i].result);
		if(max < student[i].result){
			max = student[i].result;
			max_i = i;
		}
		if(min >student[i].result){
			min = student[i].result;
			min_i = i;
		}
	}
	printf("%s %s\n",student[max_i].name,student[max_i].num);
	printf("%s %s\n",student[min_i].name,student[min_i].num);
	return 0;
}

