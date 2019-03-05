#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
	int i, j, k, key;
	    for (i = 1; i < n; i++) {
		    key = arr[i]; //n회차에 n+1번째 요소 조회
		    for (j = i-1; j >= 0; j--) {
			    if (arr[j] <= key) break; //key보다 작은 원소 찾으면 중단
			    arr[j+1] = arr[j]; //아니면 모든 원소를 한 칸씩 오른쪽으로 이동
		    }
	 arr[j+1] = key; //찾은 제자리에 key 배치
 }
}

int main() {
    int A, i, digit;
    int tmp[10];
    cin >> A;
    for(i = 0; A%10 != A; i++) {
	tmp[i] = A%10;
	A = A/10;
    }
    tmp[i] = A;
    digit = i+1;
    int arr[digit];
    for(i = 0; i < digit; i++) {
	arr[i] = tmp[i];
    }
    InsertionSort(arr, digit);
    for(i = digit-1; i >= 0; i--) {
	cout << arr[i];
    }
    cout << endl;
    return 0;
}
