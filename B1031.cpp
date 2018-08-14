/*
	Name: 查验身份证 
	Copyright: 
	Author: mac
	Date: 26/08/18 09:40
	Description: 
*/
#include <cstring>
#include <cstdio>
int w[19] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char change[13] = {'1','0','X','9','8','7','6','5','4','3','2'};
int main()
{
//	freopen("test.txt","r",stdin);
	int n;
	bool flag = true;
	char id[20];
	scanf("%d",&n);
	while(n--){
		int i,wg = 0;
		scanf("%s",id);
		for(i = 0;i < 17; i++){
			if(id[i]<='9'&&id[i]>='0'){
				wg += (id[i]-'0')*w[i];
			}else
				break;
		}
		if(i < 17){
			flag = false;
			printf("%s\n",id);
		}else{
			if(change[wg%11] != id[17]){
				flag = false;
				printf("%s\n",id);
			}
		}
	}
	if(flag == true)
		printf("All passed\n");
	return 0;
}

