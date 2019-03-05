#include <iostream>
#include <string>
using namespace std;
#define MAX 50

int main() {
    int N = cin.get();
    char arr[N][MAX];
    for(int i = 0; i < N; i++) {
	cout << i << " ";
	cin.getline(arr[i], MAX);
    }

    for(int i = 0; i < N; i++) {
        cout << i << " ";
	cout << arr[i] << endl;
    }
    return 0;
}
