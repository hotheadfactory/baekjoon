//https://www.acmicpc.net/problem/2577 Baekjoon No.2577 숫자의 개수

#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  int num;
  int arr[10] = {0};
  int i;
  cin >> a >> b >> c;
  num = a*b*c;
  do{
    i = num % 10;
    num /= 10;
    arr[i]++;
  }while (num != 0);
  for (int j = 0; j < 10; j++) {
    cout << arr[j] << endl;
  }
  return 0;
}
