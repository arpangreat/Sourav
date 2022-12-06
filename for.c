#include "stdio.h"

int main(int argc, char *argv[]) {
  int x = 0;

  for (int i = 0; i <= 10; i++) { // i++ , i = i + 1
    printf("%d\n", i);
  }

  while (x < 10) {
    printf("%d\n", x);
    x++;
  }

  return 0;
}
