//
//  1095.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
    
    int n;
    int arr[10001];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = arr[j];
            }
        }
    }
    
    printf("%d\n", arr[0]);
    
    return 0;
} */
