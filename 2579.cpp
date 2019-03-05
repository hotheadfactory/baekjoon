#include <iostream>
using namespace std;

int max(int a, int b) {
  return a>b? a:b;
}

int main() {
  int n;
  int stair[310] = {};
  int sum[310] = {};
  cin >> n;

  for(int i = 1; i <= n; i++) {
    cin >> stair[i];
  }
  sum[1] = stair[1];
  if(n >= 2) sum[2] = sum[1] + stair[2];
  if(n >= 3) sum[3] = max(sum[1]+stair[3], sum[2]+stair[3]);
  for(int i = 4; i <= n; i++) {
    sum[i] = max(sum[i-2] + stair[i], sum[i-3] + stair[i-1] + stair[i]);
  }
  cout << sum[n];
  return 0;
}
