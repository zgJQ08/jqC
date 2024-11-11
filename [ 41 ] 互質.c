/* same as [ 40 ] */
#include <stdio.h>
	int main(){
    	int a,b ;
      	scanf("%d%d",&a,&b);
      	int mi = (a>b)? b:a ;
      	int temp=1;
      	for(int i=1 ; i<=mi ; i++){
        	if(a%i==0 && b%i==0){
            temp = (i>temp)? i : temp ;
            }
        }
      if(temp==1) printf("兩數互質");
      else printf("兩數不互質");
    
    }
