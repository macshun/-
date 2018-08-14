#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n){
	if(n == 1)
		return false;
	for(int i = 2;i <= n / i ;i++){
			if(n % i == 0)
				return false;
	}
	return true;
}
int main()
{
	int n;
	while(1) {
		scanf("%d",&n);
		cout << is_prime(n) << endl;
	}
	
	return 0;
}

