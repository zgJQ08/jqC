#include <stdio.h>
    int main(){
        int a=0 , T  ;
        long long mintry;
          int n , m ;
      scanf("%d",&T) ;
      while(a < T ){
        mintry = 0;
          a++ ;
        scanf("%d%d",&n,&m);
        for(int i=0 ; i<n ; i++){
        mintry += m - 1;
        m -- ;
        }
        printf("%lld\n",mintry);
      }
      return 0;
    }
