#include <stdio.h>
    void pack(int Item[][2],int N,int W){ //至少要宣告[][x]後面的 
      int dp[N+1][W+1] ; 
      //初始化
      for(int i=0 ; i<N+1 ; i++){
          for(int j=0 ; j<W+1 ; j++){
              dp[i][j] = 0 ;
          }
      }
      for(int i=1 ; i<= N ; i++){
          for(int j=0 ; j<=W ; j++){
              int wi = Item[i-1][0];
              int vi = Item[i-1][1];
              if(Item[i-1][0] <= j){ //可以放進去
                  dp[i][j] = (dp[i-1][j] > dp[i-1][j-wi] +vi)? dp[i-1][j] : dp[i-1][j-wi] + vi ; 
              }else{
                  dp[i][j] = dp[i-1][j] ;
              }
              
          }
      }
      printf("%d\n",dp[N][W]);
        
    }


    int main(){
        int N , W;
          scanf("%d%d",&N,&W);
        int Item[N][2];
          for(int i=0 ; i<N ; i++){
            scanf("%d %d",&Item[i][0],&Item[i][1]);
        }
          pack(Item,N,W);
    
    }
