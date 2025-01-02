//
//  1472.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
    
    int arr[101][101];
    int n, m;
    int num = 1;
    int line = 1;
    scanf("%d %d", &n, &m);
    
    for(int i = n; i >= 1; i--) {
        if(line % 2 != 0) {
            for(int j = m; j >= 1; j--) {
                arr[i][j] = num++;
            }
        } else {
            for(int j = 1; j <= m; j++) {
                arr[i][j] = num++;
            }
        }
        line++;
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
} */
