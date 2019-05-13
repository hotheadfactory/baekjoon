#include <iostream>
using namespace std;

int hansu(int i) {
  if (i < 100) {
    return 1;
  }
  else if (i >= 100 && i < 1000) {
    if ((i/100)-((i/10)-(i/100)*10) == ((i/10)-(i/100)*10) - (i%10)) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int a, i;
  int k = 0;
  cin >> a;

  //cout << hansu(a) << endl;

  //cout << a / 100 << " " << (a / 10) - (a/100)*10 << " " << a%10 << endl;

  for(i = 1; i <= a; i++) {
    k += hansu(i);
  }

  cout << k<< endl;
}
