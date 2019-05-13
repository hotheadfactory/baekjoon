//https://www.acmicpc.net/problem/10950 'A+B - 3'
#include <iostream>
using namespace std;

int main() {
  int n, i, a, b;
  cin >> n;
  for(i = 0; i < n; i++) {
    cin >> a >> b;
    cout << a+b << endl;
  }
  return 0;
}
