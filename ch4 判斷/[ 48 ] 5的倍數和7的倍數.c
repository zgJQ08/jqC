#include <stdio.h>
	int main(){
    	int N ,sum=0;
      	scanf("%d",&N);
      	for(int i=1 ; i<=N ;i++){
        	if(i%5==0) continue;
          	else if(i%7==0) sum += i*2 ;
          	else if(i%10==7) sum += i*2 ;
          	else  sum += i ;
        }
    	printf("%d",sum);
    
    }
