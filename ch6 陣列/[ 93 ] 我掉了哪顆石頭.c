/* !=EOF 應該是唯一一題要用到ㄉ*/
#include <stdio.h>
	int main(){
    	int N[100];
      	int i=0;
      	while(scanf("%d",&N[i])!=EOF){
        i++ ;
        }
      	
      	for(int j=0 ; j<i ; j++){
        	int ns = 0;
          	for(int k=0 ; k<i ; k++){
            	if(N[k] == N[j]) ns ++;
            }
          	if(ns%3==2){
            	printf("%d",N[j]);
              	return 0 ;
            }
        }
    }
