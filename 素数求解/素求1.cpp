#include <iostream>
using namespace std;
int main(void){
	int prime[100];
	prime[1] = 2;
	int k = 2;
	for(int i = 3;i<100;i++){//ö�������� 
		bool ok = 1;
		for(int j = 1;j<k;j++){
			if(i%prime[j]==0){//ö��������֪������ 
				ok = !ok;
				break;			//��������������ѭ����ʼ��һ�������ж� 
			}
		}//�ж��Ƿ�Ϊ����
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
