/* 記得每次運算時要歸0 */
#include <stdio.h>
int main(){
    
	int times , Lstep = 0;;
	scanf("%d",&times);
	
	while(times--){
	    Lstep = 0 ;
    	int A , B;
      	scanf("%d%d",&A,&B);
      	for(int i=A ; i<=B ; i++){
        int temp = i ;
        int step = 1 ;
          while( temp != 1){
          		if(temp%2) temp = temp * 3 +1 ;
            	else temp /=2 ;
            	step ++ ;
          }
          Lstep = (step>Lstep)? step : Lstep ;
        }
      printf("%d\n",Lstep);
    
    }
}
