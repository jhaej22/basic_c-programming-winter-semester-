//
//  10_1_1.c
//  basic_c programming
//
//  Created by 전혜준 on 12/29/24.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

/* int guess; // 전역변수 선언

int main(void) {
    
    int input; // 지역변수 선언
    srand((long)time(NULL));
    guess = rand() % MAX + 1;
    
    printf("1에서 %d 사이의 한 정수가 결정되었습니다.\n", MAX);
    printf("이 정수는 무엇일까요? 정답: ");
    
    while(scanf("%d", &input)) {
        
        switch (testNumber(input)) {
            case 0:
                puts("정답입니다.");
                break;
            case -1:
                printf("정답은 입력한 수 보다 작습니다. 다시 입력하세요.: ");
                break;
            case 1:
                printf("정답은 입력한 수보다 큽니다. 다시 입력하세요.: ");
                break;
        }
    }
    
    return 0;
} */
