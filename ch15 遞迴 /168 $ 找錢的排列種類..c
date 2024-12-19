//k=0 只有一種排列方式 、 k<0 無效 

//#include <stdio.h>
 
int moneyPerm(int K){
  if(K==0) return 1 ;
  if(K<0) return 0;
  return moneyPerm(K-1) + moneyPerm(K-5) + moneyPerm(K-10);
}

/*
int main(){
  int money;
  scanf("%d", &money);
  printf("%d", moneyPerm(money));
  return 0;
}
*/
