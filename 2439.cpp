//https://www.acmicpc.net/problem/2439 '별 찍기 - 2'
#include <iostream>
using namespace std;

int main() {
  int n;
  int i, j;
  cin >> n;
  for(i = 1; i <= n; i++) {
    for(j = n-i; j > 0; j--) cout << ' ';
    for(j = 1; j <= i; j++) cout << '*';
    cout << endl;
  }
  return 0;
}
