/* 特別注意 "1.0" 才能讓他知道是float */
#include <stdio.h>
	int main(){
    	int N;
      	scanf("%d",&N);
      	float sum = 0 ;
      	for(int i=1 ; i<=N ; i++){
        	sum += 1.0/i ;
        }
      	printf("%.2f",sum);
    }
