/* 用New[]去替換Num[] */
#include <stdio.h>
	int main(){
    	int N;
    	
      scanf("%d",&N);
      
      	int Num[N];
      	
   	  for(int i=0 ; i<N ; i++){
      	scanf("%d",&Num[i]);
      }
      int n0 = 0 , k=0;
      int New[N];
      
      for(int i=0 ; i<N ; i++){
          if(Num[i] != 0){
              New[k] = Num[i];
              k++ ;
          }
      }
      
      for(int i=k ; i<N ; i++){
          New[i] = 0 ;
      }

      
     for(int i=0 ; i<N ; i++){
        if(i==0) printf("%d",New[i]);
        else printf(" %d",New[i]);
      } 
    }
