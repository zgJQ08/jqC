#include <stdio.h>

struct data {
    char med[16];
    int time;
};

int main() {
    int Case;
    scanf("%d", &Case);
    while (Case--) {
        int giveM, haveM;
        scanf("%d %d", &giveM, &haveM);
        struct data Med[giveM];

        for (int i = 0; i < giveM; i++) {
            scanf("%s %d", Med[i].med, &Med[i].time);
        }

        int next[giveM]; // 設定M1第一次啥時吃
        for (int i = 0; i < giveM; i++) {
            next[i] = Med[i].time;
        }
        
//開始吃藥-------------------
        for (int count = 0; count < haveM; count++) {
            int idx=0; //假設第一個先吃
            for (int i = 1; i < giveM; i++) {
                if (next[i] < next[idx]) {
                    idx = i; //現在吃啥
                }
            }
            printf("%d %s\n", next[idx], Med[idx].med);
            next[idx] += Med[idx].time;  //M1下一次啥時吃
        }
    }
}
