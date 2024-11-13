/* 弄一個t去接餘數，記得重置 */
#include <stdio.h>
	int main(){
    	int times;
      	scanf("%d",&times);

      	while(times--){
        	int N , sum=0 ,t ;
          	scanf("%d",&N);
          	sum+=N;
          	N++;
          	
          	while(N>2){
          	    t=0 ;
                t += N%3 ;
              	N /= 3 ;
              	sum += N;
              	N += t ;
            }

        printf("%d\n",sum);
        }

    }
