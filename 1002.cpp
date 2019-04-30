#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int T;
    scanf("%d", &T);
    int** arr = new int*[T];
    for (int i = 0; i < T; i++) {
        arr[i] = new int[6];
        scanf("%d %d %d %d %d %d",
            &arr[i][0], &arr[i][1], &arr[i][2],
            &arr[i][3], &arr[i][4], &arr[i][5]);
    }
    for (int i = 0; i < T; i++) {
        float minD = sqrt(pow(arr[i][0] - arr[i][3], 2)
            + pow(arr[i][1] - arr[i][4], 2));

        if (minD != 0) {
            if (arr[i][2] + arr[i][5] < minD || abs(arr[i][2] - arr[i][5]) > minD) {
                printf("0\n");
            }
            else if (arr[i][2] + arr[i][5] == minD || abs(arr[i][2]-arr[i][5]) == minD) {
                printf("1\n");
            }
            else {
                printf("2\n");
            }
        }
        else {
            if (arr[i][2] != arr[i][5]) {
                printf("0\n");
            }
            else {
                printf("-1\n");
            }
        }
    }

    return 0;
}
