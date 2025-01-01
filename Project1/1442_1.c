//
//  1442_1.c
//  basic_c programming
//
//  Created by 전혜준 on 1/1/25.
//

// 선택 정렬(오름차순): 가장 작은 원소를 찾아 첫번쨰 위치로 옮기고
// 남은 원소를 또 탐색하여 그 다음 작은 원소를 찾아 두번째위치로 옮기는
// 가장 작은 것을 선택하여 앞단 부터 정렬하는 방식

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void) {
    
    int arr[10001];
    int n, min, temp;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n - 1; i++) {
        min = i;
        for(int j = i + 1; j <= n - 1  ;j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
} */
