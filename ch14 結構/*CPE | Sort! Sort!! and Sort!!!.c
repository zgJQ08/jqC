#include <stdio.h>
#include <stdlib.h>

int n, m;

// for qsort
int cmp(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    if (x % m == y % m) {
        if (x % 2 != 0 && y % 2 != 0) {
            // 奇數按降序排列
            return y - x;
        } else if (x % 2 == 0 && y % 2 == 0) {
            // 偶數按升序排列
            return x - y;
        } else {
            // 奇數優先於偶數
            return (x % 2 != 0) ? -1 : 1;
        }
    }
    // 按餘數升序排列
    return (x % m) - (y % m);
}

int main() {
    while (scanf("%d %d", &n, &m) && n != 0 && m != 0) {
        int a[n]; 

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        // 使用 qsort 排序
        qsort(a, n, sizeof(int), cmp);

        printf("%d %d\n", n, m);
        for (int i = 0; i < n; i++) {
            printf("%d\n", a[i]);
        }
    }
    printf("0 0\n");
    return 0;
}
