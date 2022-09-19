#include <stdio.h>

// constant는 아래와 같이 선선
#define pi 3.1415

/*
  variable: 변할 수 있는
  constant: 변할 수 없는
  global,
  local,
  static,
*/

int main() {

  int age = 22; // initialized
  float weight; // unInitialized 0000
  char last_name = 'a';

  weight = 80.1; // initialized

  printf("constant pi: %.3f \n", pi);
  printf("variable age: %d \n", age);
  printf("variable weight: %.2f \n", weight);
  printf("varable last_name: %c \n", last_name);
  return 0;
}