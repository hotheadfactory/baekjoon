//https://www.acmicpc.net/problem/7576 Baekjoon No.7576 토마토
#include <iostream>
using namespace std;

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  int arr[y][x];
  int date = 0;
  bool phase = true;
  for(int i = 0; i < y; i++) {
    for(int j = 0; j < x; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  while(phase) {
    phase = false;
    for(int i = 0; i < y; i++) {
      for(int j = 0; j < x; j++) {
        if(arr[i][j] == 1 || arr[i][j] == 2) {
          arr[i][j] = 1;
          if(arr[i][j-1] == 0 && j != 0) {
            arr[i][j-1] = 2;
          }
          if(arr[i][j+1] == 0 && j != x-1) {
            arr[i][j+1] = 2;
          }
          if(arr[i-1][j] == 0 && i != 0) {
            arr[i-1][j] = 2;
          }
          if(arr[i+1][j] == 0 && i != y-1) {
            arr[i+1][j] = 2;
          }
        }
        if(arr[i][j] == 0) phase = true;
      }
    }
    date++;
    cout << "---------------------------------------------" << endl;
    for(int i = 0; i < y; i++) {
      for(int j = 0; j < x; j++) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
    cout << "---------------------------------------------" << endl;
  }
  printf("%d\n" ,date);
  return 0;
}
