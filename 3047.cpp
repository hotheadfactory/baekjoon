#include <iostream>
using namespace std;

void sort(int arr[]) {
    int i, j, k, key;
    for (i = 1; i < 3; i++) {
        key = arr[i]; //n회차에 n+1번째 요소 조회
        for (j = i-1; j >= 0; j--) {
            if (arr[j] <= key) break;
	    arr[j+1] = arr[j]; //아니면 모든 원소를 한 칸씩 오른쪽으로 이동
	}
	arr[j+1] = key;
    }
}


int main() {
    int num[3];
    char abc[4];
    for(int i = 0; i < 3; i++){
	    cin >> num[i];
    }
    cin >> abc;
    sort(num);
    for(int i = 0; i < 3; i++) {
	    if(abc[i] == 'A') {
	    	cout << num[0] << " ";
	    }
	    else if(abc[i] == 'B') {
	    	cout << num[1] << " ";
	    }
	    else if(abc[i] == 'C') {
    		cout << num[2] << " ";
    	}
    }
    return 0;
}
