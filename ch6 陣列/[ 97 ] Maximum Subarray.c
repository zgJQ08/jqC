#include <stdio.h>
    int main(){
          int n;
          scanf("%d",&n);
        int num[n];
          for(int i=0 ; i<n ; i++){
            scanf("%d",&num[i]);
        }
         int temp = -100 , sum=0;
      for(int j=0 ; j<n ; j++){
          sum = 0;
        for(int k=j ; k<n ; k++){
            sum += num[k] ;
            temp = (sum>temp)? sum : temp ;
        }
      }

      printf("%d",temp);
    }
