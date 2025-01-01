//
//  1442.c
//  basic_c programming
//
//  Created by 전혜준 on 12/31/24.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int a[10001];
int n, i, j, temp, min;


int main(void) {
    
    
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(i = 1; i < n; i++) {
        min = i;
        for(j = i + 1; j <= n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    
    for(i = 1; i <= n; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
} */

// 1 3 2 5 4 i = 1
// 1 3 2 5 4 i = 2 -> min = 3 -> 1 2 3 5 4
// 1 2 3 5 4 i = 3
// 1 2 3 5 4 i = 4, min = 4 -> min = 5 -> 1 2 3 4 5


// 3 4 2 1 5 i = 1, min = 1 -> min = 3(j = 3) -> min = 4(j = 4) -> 1 4 2 3 5
// 1 4 2 3 5 i = 2, min = 2 -> min = 3 (j = 3) -> 1 2 4 3 5
// 1 2 4 3 5 i = 3, min = 3 -> min = 4(j = 4) -> 1 2 3 4 5

// 3 4 2 1 5



