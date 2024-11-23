#include <stdio.h>

int main() {
    int M, N;
    while (1) {
        scanf("%d %d", &M, &N);
        if (M == 0 && N == 0) break;

        int result = 0;
        //單行單列不會攻擊 沒差
        if (M == 1 || N == 1) {
            result = M * N;
        } else if (M == 2 || N == 2) {
        //多兩個，可以多放兩個
            int max_dim = (M > N) ? M : N;
            result = (max_dim / 4) * 4 + ((max_dim % 4 > 2) ? 4 : (max_dim % 4) * 2);
        } else {
        //交錯放
            result = (M * N + 1) / 2; 
        }

        printf("%d knights may be placed on a %d row %d column board.\n", result, M, N);
    }
    return 0;
}
