/* 求公因數的迴圈從i=1 ~ min(a,b) */
#include <stdio.h>
	int main(){
    int a , b;
    scanf("%d%d",&a,&b);
    int mi = (a>b)? b:a;
    int temp = 1 ;
    for(int i=1 ; i<= mi ; i++){
    	if(a%i ==0 && b%i ==0){
          if(i==1){ 
            printf("1");
          }
          else{ 
            temp = (i>temp)? i:temp ;
            printf(" %d",i);
          }
        }
    }
    printf("\n%d",temp);
    
    
    }
