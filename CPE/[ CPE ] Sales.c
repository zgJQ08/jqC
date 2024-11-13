/* (20, 43, 57, 43, 20) 就是 [1,2,2,1] 後面的>=前面的就+ */
#include <stdio.h>
    int main(){
        int times;
        scanf("%d",&times);
      while(times--){
          int nums;
          scanf("%d",&nums);
            int N[nums] ;
        for(int i=0 ; i<nums ;i++){
            scanf("%d",&N[i]);
        }
        int sum = 0 ;
        for(int i=1 ; i<nums ; i++){
            for(int j=0 ; j<i ; j++){
            if(N[i]>=N[j]){
                sum++ ;
            }
            }
        }
      printf("%d\n",sum);
      }
      
    
    }
