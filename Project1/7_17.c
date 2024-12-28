#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {

  int input, sum;
  
  do {
    
    printf("양의 정수 또는 0(종료)을 입력하세요: ");
    scanf("%d", &input);

    for(int i = 1; i <= input; i++) {
      for(int j = 1; j <= i; j++) {
        sum = 0;
        printf("%d", j);
        j == i ? printf(" = ") : printf(" + ");
        sum += j;
      }
      printf("%d\n", sum);
    }
  } while(input > 0);

  printf("프로그램을 종료합니다.\n");

  return 0;
} */