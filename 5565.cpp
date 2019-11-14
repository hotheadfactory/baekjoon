// https://www.acmicpc.net/problem/5565 Baekjoon No.5565 영수증

#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int tmp = 0;
  cin >> sum;
  for (int i = 9; i > 0; i--) {
    cin >> tmp;
    sum -= tmp;
  }
  cout << sum << endl;
  return 0;
}
