//
//  1441_1.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//

// 버블 정렬: 인접한 두 원소를 검사하여 자리를 바꿔가며 정렬하는 방식

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 /* int main(void) {
    
    int arr[10001];
    int n;
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
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    
    return 0;
} */
