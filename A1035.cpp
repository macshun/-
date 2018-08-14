/*
	Name: Password
	Copyright: 
	Author: mac
	Date: 04/09/18 14:38
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
struct Student{
	char name[12];
	char pw[12];
}stu[1010],temp[1010];
int main()
{
	int n,cnt = 0,cnt1 = 0;
	scanf("%d",&n);
	int t = n;
	while(n--){
		int flag = 0;
		scanf("%s %s",stu[n].name,stu[n].pw);
		int len = strlen(stu[n].pw);
		for(int i = 0; i < len; i++){
			if(stu[n].pw[i] == '1'){
				stu[n].pw[i] = '@';
				flag = 1;
			}
			if(stu[n].pw[i] == '0'){
				stu[n].pw[i] = '%';
				flag = 1;
			}
			if(stu[n].pw[i] == 'l'){
				stu[n].pw[i] = 'L';
				flag = 1;
			}
			if(stu[n].pw[i] == 'O'){
				stu[n].pw[i] = 'o';
				flag = 1;
			}		
		}
		if(flag){
			cnt++;
			temp[cnt1++] = stu[n];
		}
	}
	if(cnt != 0){
		printf("%d\n",cnt);
		for(int i = 0;i < cnt1; i++){
			printf("%s %s\n",temp[i].name,temp[i].pw);
		}
	}else{
		if(t == 1){
			printf("There is 1 account and no account is modified");
		}else
			printf("There are %d accounts and no account is modified",t);
	}
	return 0;
}

