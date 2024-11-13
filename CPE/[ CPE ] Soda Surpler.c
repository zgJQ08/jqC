/*a+b , c個空瓶=汽水*/ 
#include <stdio.h>
    int main(){
        int times;
      scanf("%d",&times);
          while(times--){
            int a, b , n , Bo=0 ;
            scanf("%d%d%d",&a,&b,&n);
              a += b ;
              while(a>=n){
            Bo += a/n ;
            a = a/n + a%n ;
            }
        printf("%d\n",Bo);
        }
    }
