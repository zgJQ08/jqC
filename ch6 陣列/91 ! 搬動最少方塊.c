#include <stdio.h>
	int main(){
	    int times = 1 ;
      while(1){
      	int N;
    	scanf("%d",&N);
        if(N==0) return 0 ;
      	int Num[N] , sum=0;
      	for(int i=0 ; i<N ; i++){
        	scanf("%d",&Num[i]);
          	sum += Num[i] ;
        }
        int avg = sum / N ;
        int dif = 0;
        for(int i=0 ; i<N ; i++){
        	dif += (Num[i] -avg >0)? Num[i] - avg : avg - Num[i] ;
        }
        printf("Set #%d\n",times);
        printf("The minimum number of moves is %d.\n",dif/2);
        printf("\n");
        times ++ ;
      }
    }
