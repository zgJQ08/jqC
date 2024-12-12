#include <stdio.h>

int main() {
    int k, q, m;

    while (scanf("%d %d %d", &k, &q, &m) != EOF) {
        if (k == q) {
            // 狀態不合法 (國王與皇后在同位置)
            printf("Illegal state\n");
        } else {
            // 檢查皇后是否能合法移動(必須同列或同行)
            if ((q / 8 != m / 8) && (q % 8 != m % 8)) {
                printf("Illegal move\n");
            } else {
                if (q == m) {
                    // 皇后不能不動或停在同一格 (這邏輯可能是您提供的條件)
                    printf("Illegal move\n");
                } 
                // 下一行似乎是特定條件下印 "Stop" 的判斷(可能是特定案例)
                else if ((k == 0 && m == 9) || (k == 7 && m == 14) || (k == 56 && m == 49) || (k == 63 && m == 54)) {
                    printf("Stop\n");
                } 
                // 同一橫列 (以/8的結果判斷為同一列)
                else if (q / 8 == m / 8 && k / 8 == m / 8) {
                    if ((k - m)*(k - q) <= 0)
                        printf("Illegal move\n");
                    else if (m == k + 1 || m == k - 1)
                        printf("Move not allowed\n");
                    else
                        printf("Continue\n");
                } 
                // 同一直行 (以%8的結果判斷為同一行)
                else if (q % 8 == m % 8 && k % 8 == m % 8) {
                    if ((k - m)*(k - q) <= 0)
                        printf("Illegal move\n");
                    else if (m == k + 8 || m == k - 8)
                        printf("Move not allowed\n");
                    else
                        printf("Continue\n");
                } 
                else {
                    // 其他狀況
                    if (((m - 1) / 8 == m / 8 && m - 1 == k) || ((m + 1) / 8 == m / 8 && m + 1 == k))
                        printf("Move not allowed\n");
                    else if (((m - 8) >= 0 && k == m - 8) || ((m + 8) < 64 && k == m + 8))
                        printf("Move not allowed\n");
                    else
                        printf("Continue\n");
                }
            }
        }
    }

    return 0;
}
