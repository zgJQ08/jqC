#include <stdio.h>
	int main(){
    	int D1 , D2 , D3 , D4 , D5 , D6 ;
      	scanf("%d%d%d%d%d%d,&D1,&D2,&D3,&D4,&D5,&D6);
        int S1 , S2 , S3 , S4 , S5 , S6 ;
        int Box ;
              // 6*6
        if(D6>1){
        	Box += D6;
        }
             //5*5
        if(D5>1){
        	Box += D5;
          	S1 += 11*D5;
        }
    		//4*4
         if(D4>1){
        	Box += D4;
          	S2 += 5*D4;
        }
    	 if(D3>1){
        	if(D3%4==0) Box+=D3/4;
          	if(D3%4==3){
            	Box += 
            }
        }
    }
