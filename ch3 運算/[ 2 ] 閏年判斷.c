/* 幹 ! 民國要+1911 */
#include <stdio.h>
	int main(){
    	int Y;
      	scanf("%d",&Y);
      	Y = Y+1911 ;
      	if((Y%4==0 && Y%100 !=0)||Y%400==0) printf("1");
      	else printf("0");
    
    }
