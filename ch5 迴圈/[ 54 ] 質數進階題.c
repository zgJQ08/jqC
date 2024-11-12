#include <stdio.h>
	int main(){
    	int times;
      	scanf("%d",&times);
      	while(times--){
        	int N=0;
          	scanf("%d",&N);
          	int M=0; int temp = N ;
          	while(temp>0){
            M *=10;
            M += temp%10;
            temp/=10;
            }
            int p = 1 , e = 1 ;
            if(M==N) e=0 ;
          	for(int i=2 ; i<N ; i++){
            	if(N%i ==0) p = 0;
            }
          	for(int j=2 ; j<M ; j++){
            	if(M%j ==0) e = 0;
            }

        	if(p==1 && e==1) printf("%d is emirp.\n",N);
          	else if(p==1 && e==0) printf("%d is prime.\n",N);
          	else printf("%d is not prime.\n",N);
        }
    }
