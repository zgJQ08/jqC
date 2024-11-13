/* 應該不會考^^ 考了就暴力破解 */
#include <stdio.h>
    int main(){
      float arr[3][3] ;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            scanf("%f",&arr[i][j]) ;
        }
    }
      float det = arr[0][0] * ( arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])
              + arr[0][1] * ( arr[1][2] * arr[2][0] - arr[1][0] * arr[2][2])
              + arr[0][2] * ( arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
                  
    float inv[3][3] ;
             
                  inv[0][0] = arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1] ;
                  inv[0][1] = (arr[0][1] * arr[2][2] - arr[0][2] * arr[2][1])*-1 ;
                  inv[0][2] = arr[0][1] * arr[1][2] - arr[0][2] * arr[1][1] ;
                  inv[1][0] = (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])*-1 ;
                  inv[1][1] = arr[0][0] * arr[2][2] - arr[0][2] * arr[2][0] ;
                  inv[1][2] = (arr[0][0] * arr[1][2] - arr[0][2] * arr[1][0] )*-1 ; 
                  inv[2][0] = arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0] ;
                  inv[2][1] = (arr[0][0] * arr[2][1] - arr[0][1] * arr[2][0] )*-1 ;
                  inv[2][2] = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0] ;
     
    for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
            inv[i][j] = inv[i][j] / det ;
            if(inv[i][j] ==0){
                printf("0 ");
            }else{
            printf("%f ",inv[i][j]) ;
            }
            }
                   printf("\n");
            }
                  
    
    }
