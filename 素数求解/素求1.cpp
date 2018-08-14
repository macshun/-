#include <iostream>
using namespace std;
int main(void){
	int prime[100];
	prime[1] = 2;
	int k = 2;
	for(int i = 3;i<100;i++){//枚举所有数 
		bool ok = 1;
		for(int j = 1;j<k;j++){
			if(i%prime[j]==0){//枚举所有已知的素数 
				ok = !ok;
				break;			//不是素数，跳出循环开始下一个数的判断 
			}
		}//判断是否为素数
		if(ok){
			prime[k] = i;
			k++;
		}
		
	}
	for(int i = 1;i < k;i++){
		cout <<"count"<<i<<' '<<prime[i]<<endl;
	}
	return 0;
}
