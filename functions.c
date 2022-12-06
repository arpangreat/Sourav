#include <stdio.h>

void print(double i);
double add(int i, int j);

int main(int argc, char *argv[]) {
  int x = 100;

  double a = 2.0, b = 3.4;

  print(x);
  print(add(a, b));
  return 0;
}

// dataType functionName(param1, param2 ... param n) { block of code }
void print(double i) { printf("%f\n", i); }

double add(int i, int j) { return i + j; }
