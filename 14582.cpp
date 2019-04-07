#include <iostream>
using namespace std;

int checkLead(int away, int home) {
  if(away > home) {
    return 1;
  }
  else return 0;
}
int main() {

  int sumUl = 0;
  int sumSl = 0;
  int ul[9], sl[9];
  int lead = 0;
  int i;
  for (i = 0; i < 9; i++) {
      scanf("%d", &ul[i]);
  }
  for (i = 0; i < 9; i++) {
      sumUl += ul[i];
      if(checkLead(sumUl, sumSl) == 1) {
        lead = 1;
      }
      scanf("%d", &sl[i]);
      sumSl += sl[i];
  }
  if(lead == 1) {
    printf("Yes");
  }
  else {
    printf("No");
  }
  return 0;
}
