#include <iostream>
#include <cstring>
using namespace std;
const int size = 100;
bool prime[size+1];
int main(){
//	memset(prime,true,100);
	int count = 1;
	prime[2] = true;
	for(int i = 3;i<size+1;i+=2){
		prime[i]=true;
	}
	for(int i = 3;i<size+1;i++){
		if(prime[i]){
			int cnt = 2;
			while(cnt*i<size + 1){
				prime[cnt*i] = false;
				cnt++;
			}
			
		}
	}
	for(int i = 2;i<size + 1;i++){
		if(prime[i] == true){
			cout << count++ <<' ' << i << endl;
		}
	}
	return 0;
}
