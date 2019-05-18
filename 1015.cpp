#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
  int i, j, k, min, key;
  for (i = 0; i < n; i++) {
    min = arr[i]; //일단 첫번째 원소를 min에 저장
    for (j = i; j < n; j++) {
     if (arr[j] < min) { //min보다 더 작을 시
       min = arr[j];
       key = j; // min값에 현재 원소를 넣고 원소 위치를 기억
     }
    }
    if(arr[i] != min) { //i값이 최솟값이 아니라면
      arr[key] = arr[i];
      arr[i] = min; //최솟값이 있던 자리와 i의 자리를 교대
    }
  }
}

void find(int A[], int B[], int P[], int len) {
  int i, j;
  for(i = 0; i < len; i++) {
    for(j = 0; j < len; j++) {
      if(A[i] == B[j]) {
        P[i] = j;
        break;
      }
    }
  }
  for(i = 0; i < len; i++) {
    for(j = i+1; j < len; j++) {
      if(P[i] == P[j]) {
        P[j]++;
      }
    }
  }
}


int main() {
  int len, i;
  cin >> len;
  int A[len] = {0};
  int B[len] = {0};
  int P[len] = {0};
  for(i = 0; i < len; i++) {
    cin >> A[i];
  }
  for(i = 0; i < len; i++) {
    B[i] = A[i];
  }
  SelectionSort(B, len);
  find(A, B, P, len);
  for(int i = 0; i < len; i++) {
    cout << P[i] << " ";
  }
  return 0;
}
