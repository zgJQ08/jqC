/* 好像是看誰加總的分數最多 */
#include <stdio.h>

int main() {
    while (1) {
        int J, R;
        scanf("%d %d", &J, &R);

        if (J == 0 && R == 0) {
            return 0;
        }

        int nums = J * R;
        int N[nums];

        for (int i = 0; i < nums; i++) {
            scanf("%d", &N[i]);
        }

        int ps[J];
        for (int i = 0; i < J; i++) { 
            ps[i] = 0;
        }

        for (int i = 0; i < nums; i++) {
            ps[i % J] += N[i];
        }

        int temp = 0, pl = 0;
        for (int i = 0; i < J; i++) {
            if (ps[i] >= temp) {
                temp = ps[i];
                pl = i;
            }
        }

        printf("%d\n", pl + 1); 
    }
}
