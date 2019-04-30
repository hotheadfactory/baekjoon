#include <iostream>
using namespace std;


int cycle(int num) {
  int tmp;
  tmp = (num%10)*10 + ((num/10)+(num%10))%10;
  return tmp;
}

int main() {
  int num, tmp;
  int i = 1;
  cin >> num;
  tmp = cycle(num);
  while(num != tmp) {
    tmp = cycle(tmp);
    i++;
  }
  cout << i;
  return 0;
}
