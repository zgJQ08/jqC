/* 分開慢慢湊就好 */
#include <stdio.h>
	int main(){
    	int N;
      	scanf("%d",&N);
      	for(int i=0 ; i<N ; i++){
        	printf("*");
        }
      printf("\n");
      	for(int i=0 ; i<N-2 ; i++){
        	printf("*");
              for(int j=1 ; j<N-1 ; j++){
            printf(" ");
              }
          	printf("*");
          	if(i != N-3)  printf("\n");
        }
   	 printf("\n");
    	for(int i=0 ; i<N ; i++){
        	printf("*");
        }

    }
