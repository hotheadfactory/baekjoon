// https://www.acmicpc.net/problem/2588 Baekjoon No.2588 곱셈
#include <iostream>
using namespace std;

int main() {
  int a, b;
  int x, y, z;
  cin >> a >> b;
  x = b/100;
  y = (b/10)-(x*10);
  z = b%10;
  cout << a * z << endl;
  cout << a * y << endl;
  cout << a * x << endl;
  cout << a * b << endl;
}
