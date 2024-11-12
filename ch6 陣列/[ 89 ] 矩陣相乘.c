/* 很長要細心 A B C要分開弄 然後 a i k * b k j */
#include <stdio.h>
	int main(){
    	int R , W ;
      	scanf("%d%d",&R,&W);
      	int A[R][W];
      	for(int i=0 ; i<R ; i++){
        	for(int j=0 ; j<W ; j++){
            	scanf("%d",&A[i][j]);
            }
        }
      	int Rb , Wb ;
      	scanf("%d%d",&Rb,&Wb);
      	int B[Rb][Wb];
      	for(int i=0 ; i<Rb ; i++){
        	for(int j=0 ; j<Wb ; j++){
            	scanf("%d",&B[i][j]);
            }
        }
        int C[R][Wb] ;
        for(int i=0 ; i<R ; i++){
            for(int j=0 ; j<Wb ; j++){
                C[i][j] = 0;
            }
        }
      	
      
      
      	for(int i=0 ; i<R ; i++){
        	for(int j=0 ; j<Wb ; j++){
            	for(int k=0 ; k<W ; k++){
                	C[i][j] += A[i][k] * B[k][j] ;
                }
            }
        }
      
      for(int i=0 ; i<R ; i++){
      	for(int j=0 ; j<Wb ; j++){
        	printf("%d ",C[i][j]);
        }
        printf("\n");
      }
    
    }
