/* 特殊解法 */
int main() {
    int n;
    scanf("%d", &n);  
    int num[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= num[i];  // XOR 
    }

    printf("%d\n", result);

    return 0;
}
