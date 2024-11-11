/* 為ㄌ按照順序，迴圈倒過來裝 */
#include <stdio.h>
	int main(){
    	int Nums;
      	int N[4];
      	scanf("%d",&Nums);
      	for(int i=3 ; i>=0 ;i--){
        	N[i] = Nums % 10;
          	Nums /= 10;
        }
      	for(int i=0 ; i<4 ; i++){
        	if(N[i] != -1){
        	    int temp = N[i];
              	int st = 0 ;
            	for(int j=0 ; j<4 ; j++){
                	if(N[j] == temp){
                    	st ++ ;
                      	N[j] = -1 ;
                    }
                }
                printf("%d%d",st,temp);
            }
        }
    
    
    }
