#include <stdio.h>

int moneyPerm(int K) {

    if (K == 0) { //完成了一種排序
        return 1;
    }

    if (K < 0) { //無效排序
        return 0;
    }

    
    return moneyPerm(K - 1) + moneyPerm(K - 5) + moneyPerm(K - 10); //選擇不同種類硬幣
}



 
int main(){
  int money;
  scanf("%d", &money);
  printf("%d", moneyPerm(money));
  return 0;
}
