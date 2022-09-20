#include <stdio.h>

int main() {
  int a = 0;

  if (a > 0) {
    printf("A is positive Number");
  } else if(a < 0) {
    printf("A is negative Number");
  } else {
    printf("What is A?");
  }

  int b = 1;

  switch(b) {
    case 1:
      printf("1");
      break; // 해당 case 해당 시 switch문 종료
    case 2: 
      printf("2");
      break;
    case 3:
      printf("3"); 
      break;
    default: 
      printf("Default")
  }

  return 0;
}