#include <stdio.h>
#include <string.h>

int main() {
 printf("Hello World \n"); 

  // strlen() => String의 길이 반환
  char arr[100] = "resister-boy"; // 12
  int box = strlen(arr);
  printf("value of strlen: %d\n", box);

  // strcpy() => (argument1, argument2)
  // argument2를 argument1에 copy
  char arr2[100] = "Hello My Name is resister-boy";
  strcpy(arr, arr2);
  printf("value of strcpy: %s \n", arr);

  // strcmp() => (argument1, argument2) 
  // compare argument1, argument2 => false ? return 0
  int compare = strcmp(arr, arr2);
  printf("value of strcmp: %d \n", compare); // 0

  // strcat() => (argument1, argumetn2)
  // write argument2를 argument1 끝나는 지점에 이어 붙여 return 
  strcat(arr, arr2);
  printf("value of strcat: %s \n", arr);

  // strchr() => (string, char) 
  // char에 해당하는 string의 pointer를 return 
  char *pos = strchr(arr, 'r');
  printf("value of strchr: %c \n", pos);

}

// int main() {
//   char str[] = "This is a sample string";
//   char * pch;

//   pch = strchr(str, 's');

//   while(pch != NULL) {
//     printf("found at %d\n", pch - str + 1);
//     pch = strchr(tring, 's');
//   }
//   return 0;
// }