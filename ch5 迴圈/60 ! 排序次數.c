#include <stdio.h>
	int main(){
    	int times;
      scanf("%d",&times);
      	while(times--){
          int Nums;
          scanf("%d",&Nums);
          int N[Nums];
          for(int i=0 ; i<Nums ; i++) scanf("%d",&N[i]);
          int step=0;
          for(int i=0 ; i<Nums-1 ; i++){
          	for(int j=0 ; j<Nums-i-1 ; j++){
            	if(N[j+1] > N[j]){
                	int temp = N[j+1] ;
                  	N[j+1] = N[j] ;
                  	N[j] = N[j+1] ;
                  	step++;
                }
            }
          }
    
    	printf("Optimal train swapping takes %d swaps.",step);
        }
    }
