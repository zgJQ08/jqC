/* 不要被題目嚇到 */
#include <stdio.h>
	int main(){
    	long a , b , N;
    	scanf("%ld%ld%ld",&a,&b,&N);
      	printf("%ld",a/b);
      	printf(".");
      	while(N--){
        a = a%b ;
        a *= 10;
        printf("%ld",a/b);
        }
    }
