#include <stdio.h>
	int main(){
    	int N;
      	scanf("%d",&N);
      	int Num[5];
      	for(int i=0 ; i<5 ; i++){
        	Num[i] = N%10;
          	N /= 10;
        }
      if(Num[0]==Num[4]&&Num[1]==Num[3]) printf("1");
      else printf("0");
      
    }
