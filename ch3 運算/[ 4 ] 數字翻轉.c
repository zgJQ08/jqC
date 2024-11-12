/* A先*10 再加上%10 */
#include <stdio.h>
	int main(){
    	int N;
      	scanf("%d",&N);
      	int A=0;
      	for(int i=0 ; i<5 ; i++){
      	A *= 10;
        A += N%10;
        N /= 10;
        }
    	printf("%d",A);
    }
