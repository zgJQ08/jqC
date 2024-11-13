/* 找到直接break 他要比較小ㄉ 然後記得重置a!! */
#include <stdio.h>
	int main(){
    	long long times ,a ;
      	scanf("%lld",&times);
      	while(times--){
      	    a=0 ;
        	long long N;
          	scanf("%lld",&N);
          for(long i=1 ; i<N ; i++){
          	long long temp = i , tN=i ;
            while(temp>0){
            	tN += temp%10;
              	temp /=10 ;
            }
            if(tN==N){
            	a=i;
            	break;
            }

          }

        printf("%lld\n",a);
        }

    }
