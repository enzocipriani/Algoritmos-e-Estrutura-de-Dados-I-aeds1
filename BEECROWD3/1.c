#include <stdio.h>

int main(){

  int n;
  for (int n = 1; n < 101; n++) {
    if (n % 2 == 0) {
      printf("%d\n", n);
    }
  }

  return 0;
}