//
//  9_3_3.c
//  basic_c programming
//
//  Created by 전혜준 on 12/29/24.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // rand(), srand()를 위한 헤더파일
#include <time.h> // time()을 위한 헤더파일

#define MAX 100

/* int main(void) {
    
    int guess, input;
    
    srand((long)time(NULL));
    guess = rand() % MAX + 1;
    
    printf("1에서 %d 사이의 한 정수가 결정되었습니다.\n", MAX);
    printf("이 정수는 무엇일까요? 정답: ");
    
    while(scanf("%d", &input)) {
        if(input > guess) {
            printf("입력한 수 %d보다 작습니다. 다시 입력하세요: ", input);
        } else if(input < guess) {
            printf("입력한 수 %d보다 큽니다. 다시 입력하세요: ", input);
        }  else {
            puts("정답입니다. 프로그램을 종료합니다.\n");
            break;
        }
    }
    
    
    return 0;
} */
