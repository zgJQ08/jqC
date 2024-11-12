/* 用T處理有沒有，要放對位置,然後拆開數字可以順便加總*/
#include <stdio.h>
	int main(){
    	int a , b , T , sum;

    while(1){
      	scanf("%d%d",&a,&b);
      	T=0 ;
      	if(a==0 && b==0) return 0;
      	
      	for(int i= a ; i<= b ; i++){
          sum=0 ;
          int temp = i ;
          
          while(temp>0){
          	int LL = temp%10 ;
          	sum += LL*LL*LL ;
            temp /= 10;
          }

          if(sum == i) T = 1 ;
        }
        
      if(T==1) printf("有\n");
      else printf("無\n");
    
    }
	}
