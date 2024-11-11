/* for用1~N方便判斷，基偶數分開處理  */
#include <stdio.h>
	int main(){
    	int N;
      	scanf("%d",&N);
      	for(int i=1 ; i<=N ; i++){
        	if(i%2==1){
            	for(int j=1 ; j<=i ; j++){
            	    if(j%2==1) printf("1");
            	    else printf("0");
            	}
            }else{
                for(int j=1 ; j<=i ; j++){
            	    if(j%2==1) printf("0");
            	    else printf("1");
            	}
            }
            printf("\n");
        }
    
    
    }
