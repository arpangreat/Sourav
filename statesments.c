#include <stdio.h>

int main(int argc, char *argv[]) {
  int num;

  printf("Write the value of num: ");
  scanf("%d", &num);

  if (num > 0 && num < 5) { // if is not a statement
    printf("number is on range: %d\n", num);
  } else // else is an keyword , not a statement
    for (int i = 0; i < 10; i++) {
      printf("number is not in range: %d , count := %d\n", num, i);
    }

  return 0;
}
