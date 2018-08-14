#include <cstdio>
#include <cmath>
int main()
{
	char A[12],B[12];
	int Da,Db,a = 0,b = 0,ra=0,rb=0;
	scanf("%s%d%s%d",A,&Da,B,&Db);
	for(int i = 0;i < 12;i++){
		if(Da == A[i]-'0'){
			a++;
		}
		if(Db == B[i]-'0'){
			b++;
		}
	}
	for(int i = 0;i <= a;i++){
		ra += Da*pow(10,i-1);
	}
	for(int i = 0;i <= b;i++){
		rb += Db*pow(10,i-1);
	}
	printf("%d",ra+rb);
	return 0;
}

