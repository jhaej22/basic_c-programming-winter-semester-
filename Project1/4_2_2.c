//
//  4_2_2.c
//  basic_c programming
//
//  Created by 전혜준 on 12/27/24.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int oct;
    printf("8진수 정수 입력: ");
    scanf("%o", &oct);
    
    printf("%o %d %x\n", oct, oct, oct);
    printf("%#o %i %#X\n", oct, oct, oct);
    
    return 0;
}
