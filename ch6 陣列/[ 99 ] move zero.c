#include <stdio.h>
    int main(){
        int n ;
      scanf("%d",&n);
          int A[n] ;
      
      for(int i = 0 ; i<n ; i++){
          scanf("%d",&A[i]);
      }
        int new[n] , j=0;
      for(int i = 0 ; i<n ; i++){
          if(A[i]!=0){
              new[j] = A[i] ;
              j ++ ;
          }
      }
      while (j<n){
          new[j] = 0 ;
          j++ ;
      }
    
    for(int k=0 ; k<n ; k++)
    if(k==0){
    printf("%d",new[k]);   
    }else{
    printf(" %d",new[k]);
    }
    
    }
