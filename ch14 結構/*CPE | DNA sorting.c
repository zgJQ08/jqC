#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
    char letter[50];
    int num;
};

// for sort
int cmp(const void a, const voidb) {
    struct data x = (struct data)a;
    struct data y = (struct data)b;
    return x->num - y->num;
}

int main() {
    int test, n, m;
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        if (i > 0)
            printf("\n");

        scanf("%d %d", &n, &m);
        struct data g[m];

        // 初始化陣列
        for (int j = 0; j < m; j++) {
            g[j].num = 0;  // 初始化計數器
            scanf("%s", g[j].letter);
        }

        // 計算每個字串的逆序數
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n - 1; k++) {
                for (int l = k + 1; l < n; l++) {
                    if (g[j].letter[k] > g[j].letter[l])
                        g[j].num++;
                }
            }
        }

        qsort(g, m, sizeof(struct data), cmp);

        for (int j = 0; j < m; j++) {
            printf("%s\n", g[j].letter);
        }
    }

    return 0;
}
