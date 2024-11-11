#include <stdio.h>
	int main(){
    	int Num , Sc=0 ;
      	scanf("%d",&Num);
      if(Num <= 10) Sc = Num*6 ;
      else if(Num <=20) Sc = 60+ (Num-10)*2 ;
      else if(Num <= 40) Sc = 80+ (Num-20) ;
      else if(Num > 40) Sc = 100;
      
      printf("%d",Sc);
    
    
    }
