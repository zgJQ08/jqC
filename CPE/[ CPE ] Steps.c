#include <stdio.h>

int main() {
    int times; 
    scanf("%d", &times);
    while (times--) {
        long x, y;
        scanf("%ld %ld", &x, &y);

        long d = y - x; //總距離
        long k = 0; //步數
        long sum = 0;   //累積移動的距離

        while (sum < d) {
            k++;
            sum += (k + 1) / 2; 
        }

        printf("%ld\n", k);
    }
    return 0;
}

