/* Loc = [(x+y)(x+y+1)]/2 +x , 然後兩個相減吧 */ 
  
#include <stdio.h>
	int loc(long long x , long long y){
    	return (x+y)*(x+y+1)/2 + x ;
    }
	int main(){
      int t;
      scanf(”%d“,&t);
      for(int i=1 ; i<=t ; i++){
    	long long x , y ,x1 , y1 ;
      	
      	scanf(”%lld%lld%lld%lld“,&x,&y,&x1,&y1);
      	printf(”Case %d: %lld\n“,i,loc(x1,y1)-loc(x,y));
      }
    
    return 0;
    }
