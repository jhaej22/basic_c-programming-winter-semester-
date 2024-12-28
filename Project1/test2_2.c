#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

/* int main(void) {

  printf("UNSIGNED_CHAR_MAX: %u\n", UCHAR_MAX);
  printf("UNSIGNED_CHAR_MIN: %u\n", 0);

  printf("UNSIGNED_SHORT_MAX: %u\n", USHRT_MAX);
  printf("UNSIGNED_SHORT_MIN: %u\n", 0);

  printf("UNSIGNED_INT_MAX: %u\n", UINT_MAX);
  printf("UNSIGNED_INT_MIN: %u\n", 0);

  return 0;
} */

// unsigned 형은 부호가 없으므로 항상 최솟값은 0
// 값을 부호가 있는 정수로 해석하는 형식 지정자 %d 대신
// 여기서는 값을 부호가 없는 정수로 해석하는 형식 지정자 %u로 사용