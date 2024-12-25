#include <stdio.h>
	int main(){
	    
		struct data{
    		char med[16];
    		int time;
		}; 
		
    	int times;
    	scanf("%d",&times);
    	
while(times--){
        	int DrM , HvM , Time=0;
        scanf("%d%d",&DrM,&HvM);
          	struct data Info[DrM];
    for(int i=0 ; i<DrM ; i++){
        scanf("%s %d",Info[i].med , &Info[i].time);
        }
          	int T[DrM] ;
    for(int i=0 ; i<DrM ; i++){
            T[i] = Info[i].time ; //每個第一次啥時吃
        }
        
//開始吃藥        
        int NM = 0 ;
    
    while( NM < HvM){
        int NN = T[0] , Re = 0 ;

          	for(int i=0 ; i<DrM ; i++){
              if(NN>T[i]){
              NN = T[i] ;
              Re = i ;
              }
            }
            printf("%d %s\n",T[Re],Info[Re].med);
        
        //後置處理    
            NM ++ ;   
            T[Re] += Info[Re].time;
                    }
        }
    
    
    
    }
