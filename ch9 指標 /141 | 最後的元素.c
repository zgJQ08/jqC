/*#include <stdio.h>
#include <stdlib.h>
*/
int lastStoneWeight(int* stones, int stonesSize) {
    int y, x, Ly, Lx;

    while (1) {
        int NN = 0, ON ;
        for (int i = 0; i < stonesSize; i++) {
            if (stones[i] == -1) {
                NN++;
            } else {
                ON = stones[i];
            }
        }
        if (NN == stonesSize - 1) return ON;  
        else if (NN == stonesSize) return 0;  
        int y = -1 , x = -1;
        for (int i = 0; i < stonesSize; i++) {
            if (stones[i] > y && stones[i] != -1) { // 修正：排除 stones[i] == -1
                x = y;     // 更新次大值
                Lx = Ly; //更新次大值
                y = stones[i];
                Ly = i;
            } else if (stones[i] > x && stones[i] != -1) { // 排除 stones[i] == -1
                x = stones[i];
                Lx = i;
            }
        }

        if (x == y) {
            stones[Ly] = -1;
            stones[Lx] = -1;
        } else {
            stones[Lx] = -1;
            stones[Ly] = y - x;
        }
    }
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
    printf("%d\n", ans);
    free(a);
    return 0;
}
*/
