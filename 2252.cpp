#include <iostream>
using namespace std;

void lineup(int arr[][2], int N, int M) {
    for(int i = 0; i < M; i++) {
        cout <<  arr[i][0] << " " << arr[i][1] << " ";
    }
    cout << endl;
}

int main() {
    int N, M;
    cin >> N >> M;
    int arr[M][2];
    for(int i = 0; i < M; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    lineup(arr, N, M); 
    return 0;
}
