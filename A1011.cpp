#include <iostream>
#include <cstdio>
using namespace std;
char S[3] = {'W','T','L'};
int main()
{
	int j,k,l;
	double max_a = 0.0,max_b = 0.0,max_c = 0.0;
	double line1[3],line2[3],line3[3];
	for(int i = 0;i < 3;i++){
		scanf("%lf",&line1[i]);
		if(max_a < line1[i]){
		 max_a = line1[i];
		 j = i;
		}			
		
	}
	for(int i = 0;i < 3;i++){
		scanf("%lf",&line2[i]);
		if(max_b < line2[i]) {
			max_b = line2[i];
			k = i;
		}
	}
	for(int i = 0;i < 3;i++){
		scanf("%lf",&line3[i]);
		if(max_c < line3[i]){
			max_c = line3[i];
			l = i;
		} 
	}
	double ans = (max_a*max_b*max_c*0.65 - 1)*2;
	printf("%c %c %c %.2lf",S[j],S[k],S[l],ans);
	
	return 0;
}

