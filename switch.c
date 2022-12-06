#include <stdio.h>

int main(int argc, char *argv[]) {
  int x;

  printf("Enter a value: \n");
  scanf("%d", &x);

  switch (x) {
  case 1:
    printf("The value is 1\n");
    break;

  case 2:
    printf("The value is 2\n");
    break;

  case 3:
    printf("The value is 3\n");
    break;

  default:
    printf("The value is not expected\n");
    break;
  }
  return 0;
}
