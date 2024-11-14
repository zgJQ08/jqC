/*最後一個數字就是.. 先n/2+1 然後... 2ㄉn^2 -1 最後三個加起來就好!
*/
#include <stdio.h>
    int main(){
        long long n , sum ;
          while(scanf("%lld",&n) != EOF){
        
             n = n/2+1 ;
          long long lN = 2*n*n-1 ;
          sum = 3 * lN -6 ;
          printf("%lld\n",sum);
        
        }
    
    
    
    
    }