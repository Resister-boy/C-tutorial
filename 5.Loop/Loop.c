#include <stdio.h>

int main() {  
  // for
  printf("Execute For \n");
  // Loop가 언제 종료되어야 하는지 명확히 정해져있을 때
  for(int i = 0; i < 100; i++) { // for[초기값, 반복 조건, 실행] {}
    printf("%d", i);
  }

  // while
  int a = 0; // 초기값
  printf("Execute While \n");
  // 특정 조건이 충족되었을때 // 무한루프
  while(a < 100) { // 반복 조건
    printf("%d", a); // 실행
    a++;
  }
  return 0;
}