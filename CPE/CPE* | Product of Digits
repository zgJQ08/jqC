#include <stdio.h>

int main() {
    int T, N;
    if (scanf("%d", &T) != 1) return 1; // 讀取測試案例數量
    while (T--) {
        if (scanf("%d", &N) != 1) return 1; // 讀取每個測試案例的 N
        if (N == 1) {
            printf("1\n");
            continue;
        }
        int digit[10] = {0}; // 用於存儲每個數字的出現次數
        int i;
        for (i = 9; i > 1; i--) {
            while (N % i == 0) {
                digit[i]++;
                N /= i;
            }
            if (N == 1) break;
        }
        if (N == 1) {
            long long ans = 0;
            for (i = 2; i <= 9; i++) {
                while (digit[i]-- > 0) {
                    ans = ans * 10 + i;
                }
            }
            printf("%lld\n", ans);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
