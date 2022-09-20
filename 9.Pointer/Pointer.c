#include <stdio.h>

int swap(int num1, int num2) {

  int temp;

  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("a=%d\nb=%d\n", num1, num2);
}

int main() {
  int a = 5;
  int* ptr;
  // asterisk => 
  // 1. Define Pointer
  // 2. Access value in address
  // Pointer는 변수가 저장된 메모리 주소를 가르킨다

  ptr = &a;

  swap(4, 16);

  printf("Integer size: %d\n", sizeof(int));
  printf("Float size: %d\n", sizeof(float));
  printf("Char sizeL %d\n", sizeof(char));
  printf("address of a is %x\n", &a);
  printf("address of ptr is %x\n", ptr);
  printf("value of ptr is %d\n", *ptr);
  return 0;

}