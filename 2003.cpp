#include <iostream>
using namespace std;
#define MAX_N 10001

int n, m;
int a[MAX_N];
int ans;

void solution(){
    int left = 0, right = 0,now_Sum=a[0];
    while (left <= right && right < n){
        // 구간합이 M과 같으면 경우의 수 갯수에 추가하고 오른쪽으로 계속 진행한다.
        // right += 1
        if (now_Sum == m){
            ans += 1;
            right += 1;
            now_Sum += a[right];
        }
        // 구간합이 M을 넘으면 왼쪽 값을 삭제하여 본다.
        else if (now_Sum > m){
            now_Sum -= a[left];
            left += 1;
            //left가 right보다 커져 버리면 서로 바꾼 뒤 재설정
            if (left > right && left < n){
                right = left;
                now_Sum = a[left];
            }
        }
        // 구간합이 M보다 작으면 오른쪽으로 진행한다.
        else if (now_Sum < m){
            right += 1;
            now_Sum += a[right];
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    solution();
    cout << ans << "\n";
    return 0;
}
