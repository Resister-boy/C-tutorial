#include <stdio.h>

int main() {
  
  // Array: 동일한 데이터 타입을 가진 변수를 하나의 변수로 저장할 수 있게 하는 자료구조 && C는 2D Array 지원
  // 미리 할당한 array에만 접근
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // a 라는 이름으로 integer type의 변수 10개를 저장할 수 있는 공간 할당, []안에는 상수
  int b;

  // String: element가 string인 Array
  char c[12] = {'r', 'e', 's', 'i', 's', 't', 'e', 'r','b' , 'o', 'y', '\0'}; // string.length & memory 명시 // Single Quotation
  char d[] = "resisterboy"; // string.length & memory 명시X // Double Quotation
  // string의 경우 index 마지막에 "\0"를 명시
  char e[12] = "resisterboy"; // Double Quotation

  printf("a size is: %d\n", sizeof(a)); // 40byte
  printf("b size is: %d\n", sizeof(b)); // 4byte
 
  for(int i = 0; i < 10; i++) {
    a[i] =i + 1;
  }

  for(int i = 0; i < 10; i++) {
    printf("\n a[%d] = %d", i , a[i]);
  }

  float avg = 0;

  for (int i = 0; i < 10; i++) {
    avg += a[i];
  }

  avg /= 10;
  printf("\n average is: %f", avg);

  // char c
  printf("\n %s\n", c); // resisterboy
  // char d 
  printf("\n %s\n", d); // resisterboy
  // char e
  printf("\n %s\n", e); // resisterboy
}