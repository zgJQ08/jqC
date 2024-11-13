/* 分開慢慢做 然後2*2判斷式要小心(不能直接把剩餘的換成1*1) */
#include <stdio.h>
int main() {
    while (1) {
        int D1, D2, D3, D4, D5, D6;
        scanf("%d%d%d%d%d%d", &D1, &D2, &D3, &D4, &D5, &D6);
        if (D1 == 0 && D2 == 0 && D3 == 0 && D4 == 0 && D5 == 0 && D6 == 0) return 0;
        
        int S1 = 0, S2 = 0;
        int Box = 0;

        // 6x6
        Box += D6;

        // 5x5
        if (D5 >= 1) {
            Box += D5;
            S1 += 11 * D5;
        }

        // 4x4
        if (D4 >= 1) {
            Box += D4;
            S2 += 5 * D4;
        }

        // 3x3
        if (D3 >= 1) {
            Box += (D3 + 3) / 4;
            int remainder = D3 % 4;
            if (remainder == 1) {
                S2 += 5;
                S1 += 7;
            } else if (remainder == 2) {
                S2 += 3;
                S1 += 6;
            } else if (remainder == 3) {
                S2 += 1;
                S1 += 5;
            }
        }

        // 2x2
        if (D2 >= 1) {
            if (D2 > S2) {
                D2 -= S2;
                S2 = 0;
                Box += (D2 + 8) / 9;
                if (D2 % 9 != 0) {
                    S1 += (9 - (D2 % 9)) * 4;
                }
            } else {
                S2 -= D2;
                D2 = 0;
            }
        }

        // 將剩餘的 S2 換成 S1 空間
        S1 += S2 * 4;

        // 1x1
        if (D1 >= 1) {
            if (D1 > S1) {
                D1 -= S1;
                Box += (D1 + 35) / 36;
            }
        }

        printf("%d\n", Box);
    }
}
