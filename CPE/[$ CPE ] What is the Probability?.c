/* 附圖1 機率 */
#include <stdio.h>
#include <math.h>

int main() {
    int times;
    scanf("%d", &times);
    while (times--) {
        int N, Or;
        double p;
        scanf("%d %lf %d", &N, &p, &Or);


        double pro = (p * pow(1 - p, Or - 1)) / (1 - pow(1 - p, N));
        printf("%.4lf\n", pro);
    }
    return 0;
}
