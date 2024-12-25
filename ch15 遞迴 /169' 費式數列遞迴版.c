#include <stdio.h>

int fibr(int n) {
    if (n == 0 || n==1) return 1; 

    return fibr(n - 1) + fibr(n - 2);
}


int main() {
    int n;
    scanf("%d", &n); // 輸入第 n 個數
    printf("%d\n", fibr(n)); // 輸出結果
    return 0;
}
