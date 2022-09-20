#include <stdio.h> // standard input & output
#include <stdlib.h> // random Number
#include <time.h> // 시간

int main() {
  int i;

  srand(time(NULL));

  // for(i = 1; i <= 1000; i++) {
  //   int randomNumber = rand()%1000 + 1;
  //   printf("%d\n", randomNumber);
  //   if (randomNumber == 555) {
  //     break;
  //   }
  // }
  // ---------------------------------------------------
    // printf("%d\n", i);
    // if(i == 7) {
    //   printf("\n**7 found!** \n");
    //   break; // for문 안에서 break; 시 Loop 종료
    // }
 // ----------------------------------------------------
  // for(int i = 0; i < 10; i++) {
  //   if (i & 2 == 0) {
  //     continue;
  //   }
  //   printf("Hello Clang! %d \n ", i);    
  // }
  // ---------------------------------------------------
  printf("Hello \n");

goto end; // end:가 있는 곳으로 점프! => 디버깅 어려움
  printf("Byt \n");

end:
  printf("End! \n");
}