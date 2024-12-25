#include <stdio.h>


// 全排列
// idx // N 有幾個要排列 // num[]提供排列的原始數列 //used[]用來標記num[]有沒有被使用過 //result[]存放排列結果
void permute(int idx, int N, int num[], int used[], int result[]) {
    // 如果已選擇了 N 個數字，印出
    if (idx == N) {
        void ptPer(int N, int result[]) { //印出來
    for (int i = 0; i < N; i++) {
        if (i == 0) printf("%d", result[i]);
        else printf(" %d", result[i]);
    }
    printf("\n");
}
        return;
    }

    // 背起來
    for (int i = 0; i < N; i++) {
        if (!used[i]) {
            used[i] = 1;
            result[idx] = num[i];
            permute(idx + 1, N, num, used, result);
            used[i] = 0;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int num[10] , used[10] = {0} , result[10];

    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    
    // 氣泡排順序
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1-i; j++) {
            if (num[j] > num[j+1]) {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    permute(0, N, num, used, result);

}
