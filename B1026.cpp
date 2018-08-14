#include <cstdio>
#include <cmath>
int main(){
  int c1,c2,ans;
  scanf("%d%d",&c1,&c2);
  ans = round((c2-c1)/100.0);
  printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60);
  return 0;
}
