#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
  int data[] = {3, 4, 5, 7, 9};

  printf("%d %d\n", (int) sizeof(data), (int) sizeof(data[0]));
  printf("배열 data 크기 == %d\n", (int) sizeof(data) / sizeof(data[0]));
  // 전체 행렬 크기 / 한 원소의 크기 = 행렬의 크기

  double arr[][2] = {
  {1.2, 2.3},
  {7.3, 8.9}
  };

  printf("%d %d ", (int) sizeof(arr), (int) sizeof(arr[0]));

  printf("%d %d\n", (int) sizeof(arr[1]), (int) sizeof(arr[0][0]));

  int rowsize = sizeof(arr) / sizeof(arr[0]); // 전체 행렬의 크기 / 한 행의 크기 = 행의 갯수
  int colsize = sizeof(arr[0]) / sizeof(arr[0][0]); // 한 행의 크기 / 한 원소의 크기 = 열의 갯수

  printf("행수 = %d 열수 = %d\n", rowsize, colsize);
  printf("전체 원소의 갯수 = %d\n", (int) sizeof(arr) / sizeof(arr[0][0]));
  
  return 0;
} */