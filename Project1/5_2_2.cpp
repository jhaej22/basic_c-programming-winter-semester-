#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {

	int key = 12345678;

	int origin;
	printf("%ID로 사용할 8자리 정수 입력: ");
	scanf("%d", &origin);

	int encode = origin ^ key;
	printf("입력한 ID: %d ", origin);
	printf("암호화된 ID: %d\n", encode);

	int input;
	printf("로그인할 ID를 입력: ");
	scanf("%d", &input);

	int result = encode ^ key;
	printf("로그인 성공 여부: %d\n", input == result);


	return 0;
} */