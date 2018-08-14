#include <cstdio>
int main()
{
	int T,count = 1;
	scanf("%d",&T);
	while(T--){
	  long long A,B,C;
		scanf("%lld%lld%lld",&A,&B,&C);
		long long res = A + B;
		bool flag;
		if(A>0&&B>0&&res<0) flag = true;
		else if(A<0&&B<0&&res>0)flag = false;
	  else if(res > C) flag = true;
	  else flag = false;
	  if(flag == true)
	    printf("Case #%d: true\n",count++);
	  else
	    printf("Case #%d: false\n",count++);
	}
	return 0;
}

