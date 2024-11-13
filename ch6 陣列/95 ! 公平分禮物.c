#include <stdio.h>
	int main(){
    	int gf , fd ;
      	scanf("%d%d",&gf,&fd);
      	int G[gf];
      	for(int i=0 ; i<gf ; i++){
        	scanf("%d",&G[i]);
        }
      int sum=0 ;
      	for(int i=0 ; i<gf ; i++){
        	int temp = G[i] ;
          	int N=0 ;
          		if(G[i] != -1){
                	for(int j=0 ; j<gf ; j++){
                    	if(temp == G[j]){
                        	N++;
                          	G[j] = -1 ;
                        }
                    }
                }
            sum += N/fd ;
        }
      printf("%d",sum);
    }
