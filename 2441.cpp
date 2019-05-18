//https://www.acmicpc.net/problem/2441 '별 찍기 - 4'
#include <iostream>
using namespace std;

int main() {
  int n;
  int i, j;
  cin >> n;
  for(i = 1; i <= n; i++) {
    for(j = 1; j < i; j++) cout << ' ';
    for(j = n; j >= i; j--) cout << '*';
    cout << endl;
  }
  return 0;
}
