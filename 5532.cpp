//https://www.acmicpc.net/problem/5532 Baekjoon No.5532 방학 숙제
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float L, matT, korT, matD, korD;
  float matC, korC;

  cin >> L >> korT >> matT >> korD >> matD;
  korC = ceil(korT / korD);
  matC = ceil(matT / matD);
  L -= ((korC > matC) ? korC : matC);
  cout << L;
}
