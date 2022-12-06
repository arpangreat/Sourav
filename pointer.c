#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 10;

  int *ptr1 = &x; // always a pointer will be int

  printf("%d\n", *ptr1);

  return 0;
}
