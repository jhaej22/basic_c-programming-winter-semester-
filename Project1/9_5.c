//
//  9_5.c
//  basic_c programming
//
//  Created by 전혜준 on 12/29/24.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* void printarray(double data[][2], int, int);
double sum(double data[][2], int, int);

int main(void) {
    
    double x[][2] = {{11, 12}, {21, 22}, {31, 32}};
    
    int rowsize = sizeof(x) / sizeof(x[0]);
    int colsize = sizeof(x[0]) / sizeof(x[0][0]);
    printf("2차원 배열의 자료값은 다음과 같습니다.\n");
    printarray(x, rowsize, colsize);
    printf("2차원 배열의 원소합은 %.3lf입니다.\n", sum(x, rowsize, colsize));
    
    
    return 0;
}

void printarray(double data[][2], int rowsize, int colsize) {
    
    for(int i = 0; i < rowsize; i++) {
        printf("% d행의 원소: ", i + 1);
        for(int j = 0; j < colsize; j++) {
            printf("x[%d][%d] = %5.2lf   ", i, j, data[i][j]);
        }
        printf("\n");
    }
}

double sum(double data[][2], int rowsize, int colsize) {
    
    double total = 0;
    for(int i = 0; i < rowsize; i++) {
        for(int j = 0; j < colsize; j++) {
            total += data[i][j];
        }
    }
    
    return total;
} */
