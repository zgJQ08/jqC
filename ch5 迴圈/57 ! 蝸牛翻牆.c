/* 達到條件再跳出去 */
#include <stdio.h>
	int main(){
    	int a , b , c , d, m=0 , Day=0 ;
      	scanf("%d%d%d%d",&a,&b,&c,&d);
      	m += b ;
      	while(1)
        {
        	Day ++ ;
          	m += c ;
          	if( m >= a ){
               printf("%d",Day);
               return 0 ;

          	}
          	m -= b ;
        }


    }
