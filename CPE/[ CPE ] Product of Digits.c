/* 重點 0是0 */
#include <stdio.h>
int main() {
    long times;
    scanf("%ld", &times);
    while (times--) {
        long N;
        scanf("%ld", &N);

        if (N == 0) {
            printf("10\n"); 
            continue;
        }
        if (N == 1) {
            printf("1\n"); 
            continue;
        }

        long Num[1000];
        long j = 0;
        int possible = 1; 

        while (N > 1) {
            int found = 0; 
            for (int i = 9; i >= 2; i--) {
                if (N % i == 0) {
                    Num[j++] = i;
                    N /= i;
                    found = 1;
                    break;
                }
            }
            if (!found) { 
                possible = 0;
                break;
            }
        }

        if (!possible) {
            printf("-1\n"); 
        } else {
            for (int i = j - 1; i >= 0; i--) { 
                printf("%ld", Num[i]);
            }
            printf("\n");
        }
    }
}

