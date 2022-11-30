#include <stdio.h>

int main(int argc, char *argv[]) {
  /*
   * int = 4 bit
   * float = 4 bit
   * double = 8 bit [ int | float ]
   * usize = 16 bit | 10 bit
   * char = 2 bit, 'a' 'b' 'c'
   * string = 8 bit, "Sourav" "Swastik is very good person"
   * boolean = 2 bit, True | False
   * long [ data type ]
   * long long [ data type ]
   *
   *    ^
   * datatype variableName = value;
   *
   * A variable name will not start with numbers or special characters,
   * It only can contain (_) as in name
   * it can also start with (_)
   * it is alse case sensitive
   *
   */

  int sourav = 0;
  float sourav1 = 4.8;
  char soura = 'u';
  // string sour = "u";

  // typecasting
  float swastik = (float)sourav;

  printf("%f\n", swastik);

  return 0;
}
