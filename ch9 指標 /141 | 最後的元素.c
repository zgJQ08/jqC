/*#include <stdio.h>
#include <stdlib.h>
*/
int extractMax(int* stone, int* stoneSize) {
    if (*stoneSize == 0) return 0; 
    int maxIndex = 0;
    for (int i = 1; i < *stoneSize; i++) {
        if (stone[i] > stone[maxIndex]) {
            maxIndex = i;
        }
    }
    int maxValue = stone[maxIndex]; //紀錄最大值

    stone[maxIndex] = stone[*stoneSize - 1];
    (*stoneSize)--;

    return maxValue;
}

// 插入值在最後面

void insert(int* stone, int* stoneSize, int value) {
    stone[*stoneSize] = value;
    (*stoneSize)++;
}

int lastStoneWeight(int* stones, int stonesSize) {
    while (stonesSize > 1) {
        int y = extractMax(stones, &stonesSize);
        int x = extractMax(stones, &stonesSize);

        if (x != y) {
            insert(stones, &stonesSize, y - x); 
        }
    }
    return stonesSize == 1 ? stones[0] : 0; 
}
/*
int main() {
    int n = 0;
    int ans;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    ans = lastStoneWeight(a, n);
    printf("%d", ans);
    free(a);
    return 0;
}
*/
