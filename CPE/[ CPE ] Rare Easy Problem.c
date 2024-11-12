/* 如果能被0整除 輸出a ， 被0跟9整除 輸出 a-1 、a */
/* 18*10/9 = 20 ， 可以被2、9整除 => 19、20 */
#include <stdio.h>
    int main(){
        while(1){
            long long N , a ;
          scanf("%lld",&N);
              if(N==0) return 0 ;
        a = (N*10)/9 ;
          if(N%9==0) printf("%lld %lld\n",a-1 , a );
          else printf("%lld\n",a);
              
          }
        }
