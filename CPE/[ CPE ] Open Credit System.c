#include <stdio.h>

long long Num[100000];

int main() {
    int times;
    scanf("%d", &times);
    while (times--) {
        int Ns;
        scanf("%d", &Ns);

        for (int i = 0; i < Ns; i++) {
            scanf("%lld", &Num[i]);
        }
      
//從最菜的計算到最資深的
      
        long long MxD = Num[0] - Num[1];  
        long long min_junior_score = Num[Ns - 1];  //最菜的分數
        for (int i = Ns - 2; i >= 0; i--) { 
            
            long long D = Num[i] - min_junior_score;
            if (diff > MxD) {
                MxD = D;
            }
            
            if (Num[i] < min_junior_score) {
                min_junior_score = Num[i];
            }
        }

        printf("%lld\n", MxD);
    }
}
