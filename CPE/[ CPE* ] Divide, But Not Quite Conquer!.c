#include <stdio.h>
    int main(){
        int a , b ;
      while(scanf("%d %d", &a, &b) != EOF){
          int t=1 , A=1 ,N[100];
          N[0] = a ;
          
           if (b <= 1) {
            printf("Boring!\n");
            continue;
        }
        
          while(a!=1){
              if(a%b != 0){
                  A=0;
                  break;
              }
              a = a/b ;
            N[t] = a ;
            t++ ;
        }
        

        
        if(A==0){
            printf("Boring!\n");   
        }else{
        
        
      for(int i=0 ; i<t ; i++){
        if(i==0){
              printf("%d",N[i]);
          }else{
              printf(" %d",N[i]);  
        }
      }
            printf("\n");   
      }
     }
    }
