#include<iostream>

using namespace std;
#define maxn 1000000
bool p[maxn];

int prime[maxn], count = 0;

void find_prime(int n) {
  for(int i = 2;i < maxn; i++) {
    if(p[i] == false) {
      prime[count++] = i;
      if(count >= n) return;
      for(int j = 2*i; j < maxn; j += i) {//j = n*i
        p[j] = true;
      }
    }
  }
}

int main() {
  int m = 5, n = 27, i = 0;
  //cin >> m >> n;
  find_prime(n);
  for(int j = m; j <= n; j++) {
    i++;
    cout << prime[j-1];
    if(i % 10 == 0) cout << endl;
    else if(j != n)cout << " ";
  }
  return 0;
}
