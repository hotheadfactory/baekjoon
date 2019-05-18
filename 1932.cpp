#include<iostream>
#include<algorithm>

using namespace std;

int big(int a, int b) {
  if (a < b) return b;
  else return a;
}

int main()
{
   int a;
   cin >> a;
   int arr[a+1][a+1] = {0};
   for(int i = 1; i <= a; i++) {
     for (int j = 1; j <= i; j++) {
       cin >> arr[i][j];
     }
   }
   for(int i = 1; i <= a; i++) {
     for (int j = 1; j <= i; j++) {
       if(j == 1 && i > 1) arr[i][j] = arr[i-1][j] + arr[i][j];
       else if (j == i) arr[i][j] = arr[i-1][j-1] + arr[i][j];
       else arr[i][j] = big(arr[i-1][j-1], arr[i-1][j]) + arr[i][j];
     }
   }
   int max = arr[a][1];
   for(int i = 2; i <= a; i++) {
     if(arr[a][i] > max) max = arr[a][i];
   }
  cout << max << endl;
  return 0;
}
