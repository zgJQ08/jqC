#include <stdio.h>

int main() {
    int T, D, I;

    // 讀取測試案例數量
    if (scanf("%d", &T) != 1) return 1;

    while (T--) {
        // 讀取每個測試案例的 D 和 I
        if (scanf("%d %d", &D, &I) != 2) return 1;

        I--; // 將 I 減 1

        int pos = 1; // 初始化位置為 1

        for (int i = 1; i < D; i++) {
            if (I % 2) {
                pos = pos * 2 + 1;
            } else {
                pos = pos * 2;
            }
            I >>= 1; // 將 I 右移一位
        }

        // 輸出結果
        printf("%d\n", pos);
    }

    return 0;
}
