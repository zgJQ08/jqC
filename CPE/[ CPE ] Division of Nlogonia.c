/* 看著座標切分就對了 */

#include <stdio.h>
    int main(){
        while(1){
            int cases;
              scanf("%d",&cases);
              if(cases==0){
                return 0 ;
            }
              int Bx , By ;
            scanf("%d%d",&Bx,&By);
            while(cases--){
               int x , y ;
              scanf("%d%d",&x,&y);
              if(x==Bx || y == By){
                printf("divisa\n");
              }else if (x>Bx && y>By){
              printf("NE\n");
              }else if (x<Bx && y>By){
              printf("NO\n");
              }else if (x>Bx && y<By){
              printf("SE\n");
              }else if (x<Bx && y<By){
              printf("SO\n");
              }
                  
            
            }
        }
    
    }
