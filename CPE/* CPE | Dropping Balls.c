/* D深度 第I個掉落的球 ... 難以理解... */
#include <stdio.h>
    int main(){
        int times;
        scanf("%d",&times);
        while(times--){
            int D , I;
            scanf("%d%d",&D,&I);
            I--;
            int pos = 1 ;
            for(int i=1 ; i<D ; i++){
                if(I%2==1){
                    pos = pos*2+1;
                }
                else{ 
                    pos *= 2;
                }
                I /= 2;
            }
            
            printf("%d\n",pos);
        }
        
        
        
    }
