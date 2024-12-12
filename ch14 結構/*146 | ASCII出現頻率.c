#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pair {
    int frequency;    // 字元出現的次數
    char charASCII;   // 字元的 ASCII 值
} pair;

// 比較函數，用於排序
int compare(const void *a, const void *b) {
    pair *pa = (pair *)a;
    pair *pb = (pair *)b;

    // 按頻率升序排序
    if (pa->frequency != pb->frequency) {
        return pa->frequency - pb->frequency;
    }
    // 若頻率相同，按 ASCII 值降序排序
    return pb->charASCII - pa->charASCII;
}

// 輸出函數
void print(pair *myData) {
    for (int i = 0; i < 95; i++) {
        if (myData[i].frequency > 0) {
            printf("%d %d\n", myData[i].charASCII, myData[i].frequency);
        }
    }
}

int main() {
    pair *myData = (pair *)malloc(95 * sizeof(pair));
    int flag = 0;
    char str[9999];

    while (gets(str) != NULL) {
        if (flag != 0) printf("\n");
        flag++;

        // 初始化 myData
        for (int i = 0; i < 95; i++) {
            myData[i].frequency = 0;
            myData[i].charASCII = i + 32; // ASCII 範圍 32 ~ 126
        }

        // 計算頻率
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] >= 32 && str[i] <= 126) {
                myData[str[i] - 32].frequency++;
            }
        }

        // 排序
        qsort(myData, 95, sizeof(pair), compare);

        // 輸出結果
        print(myData);
    }

    free(myData);
    return 0;
}
