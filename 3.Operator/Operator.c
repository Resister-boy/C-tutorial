#include <stdio.h>

int main() {
  /* arithmatic operation */
  int a = 5 + 10; // 더하기
  printf("a: %d \n", a); // => 15

  int b = 10 / 7; // 나누기
  printf("b: %d \n", b); // int type var는 소수점 반환X => 1

  float c = 10 % 3; // 나머지 반환
  printf("c: %f \n", c); // => 1

  int d = a+1;
  printf("d: %d \n", d); // 

  /* relational operation */ 
  int e = 1;
  int f = 2;

  // return int type: true = 1, false = 0
  printf("a == b: %d \n", e == f); // 0
  printf("a != b: %d \n", e != f); // 1
  printf("a > b: %d \n", e > f); // 0
  printf("a < b: %d \n", e < f); // 1


  /* bit-wise operation */
  // &, |, ^, ~, <<, >>

  /* logical operation */
  // && - AND
  // || - OR
  // ! - NOT 

  /* assignment operation */
  // =, +=, -=, /=, %=
}