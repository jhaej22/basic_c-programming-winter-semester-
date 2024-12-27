#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int age = 0;

	printf("당신의 나이는?: ");
	scanf("%d", &age);

	if (age >= 20) {
		if (age >= 65) {
			printf("어르신 입니다.\n");
		}
		else {
			printf("성인 입니다.\n");
		}
	}
	else {
		printf("미성년자 입니다.\n");
	}

	return 0;
}