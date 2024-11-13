#include <stdio.h>

// 定義宏來計算最小值和最大值
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(){
    int n, m, ans;

    // 持續讀取輸入直到遇到 n = 0 且 m = 0
    while(scanf("%d %d", &n, &m) == 2){
        if (n == 0 && m == 0) {
            break;
        }

        if (MIN(n, m) == 1){
            printf("%d knights may be placed on a %d row %d column board.\n", 
                   MAX(n, m), n, m);
        }
        else if (MIN(n, m) == 2){
            ans = (MAX(n, m) / 4) * 2;
            if (MAX(n, m) % 4 == 1) {
                ans += 1;
            }
            else if (MAX(n, m) % 4 >= 2){
                ans += 2;
            }
            ans *= 2;
            printf("%d knights may be placed on a %d row %d column board.\n", 
                   ans, n, m);
        }
        else{
            ans = (n * m) / 2;
            if ((n % 2 == 1) && (m % 2 == 1)) {
                ans++;
            }
            printf("%d knights may be placed on a %d row %d column board.\n", 
                   ans, n, m);
        }
    }

    return 0;
}
