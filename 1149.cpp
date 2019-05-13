#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int len = 0;
    int house_cost[1000][3];
    int result[1000][3];

    scanf("%d", &len);
    for (int i = 0; i < len; i++) {
        int r, g, b;
        scanf("%d %d %d", &r, &g, &b);
        house_cost[i][0] = r;
        house_cost[i][1] = g;
        house_cost[i][2] = b;
    }
    result[0][0] = house_cost[0][0];
    result[0][1] = house_cost[0][1];
    result[0][2] = house_cost[0][2];
    for (int i = 1; i < len; i++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (col == 0) { //빨간색을 선택하면
                result[i][col] = house_cost[i][col] + min(result[i-1][1], result[i-1][2]);
            }
            else if (col == 1) { //초록색을 선택하면
                result[i][col] = house_cost[i][col] + min(result[i-1][0], result[i-1][2]);
            }
            else if (col == 2) { //파란색을 선택하면
                result[i][col] = house_cost[i][col] + min(result[i-1][0], result[i-1][1]);
            }
        }
    }

    int answer;
    if(result[len - 1][0] < result[len - 1][1]) {
      answer = min(result[len - 1][0], result[len - 1][2]);
    }
    else {
      answer = min(result[len - 1][1], result[len - 1][2]);
    }

    printf("%d\n", answer);
    return 0;
}
