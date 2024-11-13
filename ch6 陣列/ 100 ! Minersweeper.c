#include <stdio.h>
	int main(){
    	int B[4][4] , C[4][4] ;
      
      	for(int i=0 ; i<4 ; i++){
        	for(int j=0 ; j<4 ; j++){
            	scanf("%d",&B[i][j]);  
              	C[i][j] = 0 ;
            }
        }
    	for(int i=0 ; i<4 ; i++){
        	for(int j=0 ; j<4 ; j++){
            	if(B[i][j] != -1){
                  	for(int dx=-1 ; dx<=1 ; dx++){
                    	for(int dy=-1 ; dy <= 1 ; dy++){
                        	int x = i+dx ;
                          	int y = j+dy ;
                          	if(x>=0 && y>=0 && x<4 && y<4){
                            	if(B[x][y]==-1){
                                	C[i][j] += 1 ;
                                }
                            }
                        }
                    }
                }else{
                C[i][j] = -1 ;
                }
            }
        }
    for(int i=0 ; i<4 ;i++){
    	for(int j=0 ; j<4 ; j++){
        	printf("%d ",C[i][j]);
        }
      printf("\n");
    }
    }
