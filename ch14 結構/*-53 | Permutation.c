#include <stdio.h>
#include <stdlib.h>

// 比較函數，用於 qsort，升序排列
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 交換兩個數字的函數
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 反轉陣列的一部分
void reverse(int *arr, int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// 生成下個排列組合的函數
int next(int *arr, int n) {
    int i = n - 2;

    // 找到一個數字 arr[i] 小於 arr[i + 1]
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // 如果 i < 0，表示已經是最後一個排列
    if (i < 0) return 0;

    int j = n - 1;

    // 找到一個數字 arr[j] 大於 arr[i]
    while (arr[j] <= arr[i]) {
        j--;
    }

    // 交換 arr[i] 和 arr[j]
    swap(&arr[i], &arr[j]);

    // 反轉 arr[i + 1] 到 arr[n - 1] 之間的部分
    reverse(arr, i + 1, n - 1);
    return 1;
}

int main() {
    int N, arr[100];

    // 讀取數字的個數 N
    scanf("%d", &N);

    // 讀取數字到陣列
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // 對陣列進行排序，確保從最小排列開始
    qsort(arr, N, sizeof(int), compare);

    // 輸出所有排列
    do {
        // 輸出當前排列
        for (int i = 0; i < N; i++) {
            printf("%d", arr[i]);
            if (i != N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    } while (next(arr, N));

    return 0;
}
