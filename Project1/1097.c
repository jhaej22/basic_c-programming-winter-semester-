//
//  1097.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
    
    int n, x, y;
    int arr[20][20] = { };
    
    for(int i = 1; i <= 19; i++) {
        for(int j = 1; j <= 19; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d %d", &x, &y);
        
        for(int j = 1; j <= 19; j++) {
            if(arr[x][j] == 0) {
                arr[x][j] = 1;
            } else {
                arr[x][j] = 0;
            }
        }
        
        for(int j = 1; j <= 19; j++) {
            if(arr[j][y] == 0) {
                arr[j][y] = 1;
            } else {
                arr[j][y] = 0;
            }
        }
    }
    
    for(int i = 1; i <= 19; i++) {
        for(int j = 1; j <= 19; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
} */
