/*
	Name: Read Number in Chinese
	Copyright: 
	Author: mac
	Date: 04/09/18 18:05
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char z[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
char dig[5][5] = {"Shi","Bai","Qian","Wan","Yi"};
int main()
{
	char num[11];
	scanf("%s",num);
	int len = strlen(num);
	int left = 0,right = len - 1; //
	if(num[0] == '-'){ // 
		printf("Fu");
		left++;
	}
	while(left + 4 <= right){ 			//��rightÿ���ƶ�4λ��ֱ����leftͬ�� 
		right -= 4;
	}
	while(left < len){			//ѭ���������ֵ�����һ�ڣ�4λ��С��4λ�� 
		bool flag = false;			//flag == false ��ʾû���ۼƵ�0 
		bool isPrint = false;		//��ʾ�ý����λ��״̬ 
		while(left <= right){   	//�����Ҵ���ĳһ���е�ÿһλ 
			if(left > 0 && num[left] == '0'){	//�����ǰλΪ�� 
				flag = true;
			}else{
				if(flag == true){
					printf(" ling");
					flag = false;
				}			
				if(left > 0) printf(" ");
				printf("%s",z[num[left]-'0']);
				isPrint = true;
				if(left != right)
					printf(" %s",dig[right - left - 1]);
			}
			left++;
		}
		if(isPrint == true && right != len - 1){
			printf(" %s",dig[(len - 1 - right) / 4 + 2]);
		}
		right += 4;
	}
	return 0;
}

