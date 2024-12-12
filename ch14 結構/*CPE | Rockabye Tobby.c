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

        int count = 0;
        int times[giveM]; // 紀錄每個藥物的服藥時間進度
        for (int i = 0; i < giveM; i++) {
            times[i] = Med[i].time; // 初始化為該藥物的第一服用時間
        }

        // 吃藥
        while (count < haveM) {
            int minTime = 1000000;
            int selected = -1;

            // 下一個吃啥
            for (int i = 0; i < giveM; i++) {
                if (times[i] < minTime) {
                    minTime = times[i];
                    selected = i;
                }
            }

            
            printf("%d %s\n", times[selected], Med[selected].med);

            // 更新下一個吃藥的時間
            times[selected] += Med[selected].time;
            count++;
        }
    }
    return 0;
}
