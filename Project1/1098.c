//
//  1098.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
    
    int h, w;
    scanf("%d %d", &h, &w);
    int arr[101][101] = { }; // 격자판
    
    int n;
    scanf("%d", &n);
    
    int l, d, x, y;
    for(int i = 1; i <= n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if(d == 0) {
            for(int j = 0; j < l ; j++) {
                arr[x][j + y] = 1;
            }
        } else {
            for(int j = 0; j < l; j++) {
                arr[j + x][y] = 1;
            }
        }
    }
    
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
} */
