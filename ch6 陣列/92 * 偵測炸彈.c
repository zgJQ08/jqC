/* 這應該不會考^^ */
#include <stdio.h>

int main(){
    int R , C ;
    scanf("%d%d",&R,&C);
    int arr[R][C] , aBoom=0;
    for(int i=0 ; i<R ; i++){
        for(int j=0 ; j<C ; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j] == 1){
                aBoom ++ ;
            }
        }
    }
    int Boom=0 ;     
    for(int i=0 ; i<R ; i++){
        for(int j=0 ; j<C ; j++){
            if(arr[i][j] == 5){
                int ml = 1;
                // 檢查偵測器是否失靈（周圍有其他偵測器）
                for(int dx=-1 ; dx<= 1 ; dx++){
                    for(int dy=-1 ; dy<= 1 ; dy++){
                        int x = i+dx ;
                        int y = j+dy ;
                        if(!( dx==0 && dy==0 )){
                            if(x>=0 && x<R && y>=0 && y<C){
                                if(arr[x][y] == 5){
                                    ml = 0 ;
                                    break; // 偵測器失靈，跳出迴圈
                                }
                            }
                        }
                    }
                    if(ml == 0) break; // 偵測器失靈，跳出外層迴圈
                }
                if(ml == 1){
                    // 偵測器有效，掃描周圍的炸彈
                    for(int dx=-1 ; dx<= 1 ; dx++){
                        for(int dy=-1 ; dy<= 1 ; dy++){
                            int x = i+dx ;
                            int y = j+dy ;
                            if(!( dx==0 && dy==0 )){
                                if(x>=0 && x<R && y>=0 && y<C){
                                    if(arr[x][y] == 1){
                                        Boom += 1 ;
                                        arr[x][y] = 0 ; // 標記炸彈已被偵測
                                    }
                                }
                            }
                        }
                    }
                }
                // 偵測器失靈，不進行任何操作
            }
        }
    }
    int uBoom = aBoom - Boom ;
    printf("%d %d",Boom,uBoom);
    return 0;
}
