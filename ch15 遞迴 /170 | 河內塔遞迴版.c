/* #include <stdio.h> */

void hnr(int n, char A, char B, char C) {
    if (n == 1) {
        printf("盤子從%c移到%c\n", A, C);
    } else {
        hnr(n - 1, A, C, B); // 將 n-1 個盤子從 A 移到 B，借助 C
        printf("盤子從%c移到%c\n", A, C); // 將第 n 個盤子從 A 移到 C
        hnr(n - 1, B, A, C); // 將 n-1 個盤子從 B 移到 C，借助 A
    }
}


/* 
int main() {
    int n;
    scanf("%d", &n);
    hnr(n, 'A', 'B', 'C');
    return 0 ;
}
*/
