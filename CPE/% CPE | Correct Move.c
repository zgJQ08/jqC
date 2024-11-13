#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int K, Q, N;
    int kx, ky, qx, qy, nx, ny;

    // 持續讀取輸入直到 EOF
    while (scanf("%d %d %d", &K, &Q, &N) == 3) {
        if (K == Q) {
            printf("Illegal state\n");
            continue;
        }

        // 計算每個位置的座標
        kx = K / 8;
        ky = K % 8;
        qx = Q / 8;
        qy = Q % 8;
        nx = N / 8;
        ny = N % 8;

        // 檢查移動是否合法
        if (qy != ny && qx != nx) {
            printf("Illegal move\n");
            continue;
        }

        if (Q == N || K == N) {
            printf("Illegal move\n");
            continue;
        }

        if (qy == ny && ny == ky) {
            if (qx > nx && kx < qx && kx >= nx) {
                printf("Illegal move\n");
                continue;
            }
            if (qx < nx && kx > qx && kx <= nx) {
                printf("Illegal move\n");
                continue;
            }
        }
        else if (qx == nx && nx == kx) {
            if (qy > ny && ky < qy && ky >= ny) {
                printf("Illegal move\n");
                continue;
            }
            if (qy < ny && ky > qy && ky <= ny) {
                printf("Illegal move\n");
                continue;
            }
        }

        if ((abs(nx - kx) == 1 && ny == ky) || (nx == kx && abs(ny - ky) == 1)) {
            printf("Move not allowed\n");
            continue;
        }

        // 使用布林變數來判斷是否繼續
        bool flag = false;
        if (kx + 1 < 8 && (kx + 1) != nx && ky != ny) flag = true;
        if (kx - 1 >= 0 && (kx - 1) != nx && ky != ny) flag = true;
        if (ky + 1 < 8 && kx != nx && (ky + 1) != ny) flag = true;
        if (ky - 1 >= 0 && kx != nx && (ky - 1) != ny) flag = true;

        if (flag)
            printf("Continue\n");
        else
            printf("Stop\n");
    }

    return 0;
}
