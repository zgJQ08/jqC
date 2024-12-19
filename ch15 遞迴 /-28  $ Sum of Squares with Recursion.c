#include <stdio.h>
	int squares(int n){
    	if(n==0) return 0;
      	else if(n==1) return 1;
      	return n*n + squares(n-1);
    }
	int main(){
    	int n;
      	scanf("%d",&n);
      	printf("%d",squares(n));
    }
