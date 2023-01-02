#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkexample() {
  if (fork() == 0) {
    printf("Hello from 1\n");
  } else {
    printf("Hello from 0\n");
  }
}

int main (int argc, char *argv[]) {
  forkexample();
  return 0;
}
