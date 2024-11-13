#include <stdio.h>
	int main(){
    	int Nums;
      	scanf("%d",&Nums);
      	int So = 0 , Se = 0 ,Df=0 ;
      	while(Nums>0){
          if(Nums>0){
        	So += Nums%10;
          	Nums /= 10;
          }
          if(Nums>0){
          	Se += Nums %10;
            	Nums /= 10;
          }
          
        
        }
    	Df = (Se - So>0)? Se-So : So-Se ;
      printf("%d",Df);
    }
