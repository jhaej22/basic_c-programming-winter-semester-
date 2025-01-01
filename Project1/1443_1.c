//
//  1443_1.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//
// 삽입정렬(오름차순): 정렬된 데이터 셋에 뒤쪽에서부터 원소를 하나씩 삽입해서
// 순서에 맞는 위치로 찾아가며 정렬하는 방식

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
    
    int arr[10001];
    int n, key, j;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 1; i < n; i++) {
        key = arr[i];
        for(j = i - 1; arr[j] > key; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
        
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
} */
