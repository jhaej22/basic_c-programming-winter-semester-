//
//  1099.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
    
    int arr[11][11] = { };
    
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int x = 2, y = 2;
    
    while(1) {
        
        if(arr[x][y] == 0) {
            arr[x][y] = 9;
            y++;
        }
        
        if(arr[x][y] == 1) {
            x++;
            y--;
        }
        
        if(arr[x][y] == 2) {
            arr[x][y] = 9;
            break;
        } else if(arr[x][y + 1] == 1 && arr[x + 1][y] == 1) {
            if(arr[x][y] == 0) {
                arr[x][y] = 9;
            }
            break;
        }
    }
    
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
} */



