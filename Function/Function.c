#include <stdio.h>

void hello(int type) {
  if (type == 1) {
    printf("*******************\n");
  } else if (type == 2) {
    printf("@@@@@@@@@@@@@@@@@@@\n");
  } else {
    printf("Error!\n");
  }

  return;
}

int add(int a, int b) {
  int sum;
  sum = a + b;
  return sum;
}

int main() {
  // 함수의 장점
  // 1. 코드의 가독성
  // 2. 재사용 가능성
  // 3. 디버깅 & 에러 찾기

  // 함수의 종류
  // 1. 남이 만든 함수
  // 2. 내가 직접 만든 함수

  // 함수의 구조
  // 1. return type
  // 2. function name
  // 3. arguments

  hello(1);

  int sum;

  sum = add(5, 6);
  printf("\n num is: %d", sum);

  return 0;
}