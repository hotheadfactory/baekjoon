#include<iostream>
using namespace std;

int main() {
  int N = 40;
  int T;

  scanf("%d", &T);

  int* test = new int[T];

  for (int i = 0; i < T; i++) {
    scanf("%d", &test[i]);
  }

  for (int j = 0; j < T; j++) {
    int i = 0;
    int list1[41] = {};
    int list2[41] = {};
    while (i <= test[j]) {
      if (i == 0) {
        list1[i] = 1; list2[i] = 0;
      }
      else if (i == 1) {
        list1[i] = 0; list2[i] = 1;
      }
      else {
        list1[i] = list1[i-1] + list1[i-2];
        list2[i] = list2[i-1] + list2[i-2];
      }
      i++;
    }

    printf("%d %d\n", list1[i-1], list2[i-1]);
  }

  return 0;
}
