/* 小麻煩，先找平方之後分開來做 */
#include <stdio.h>
    int main(){
        long long x , y , N , p;
        scanf("%lld",&N);
        
        for(int i=1 ; i<100000 ; i++){
            if(N-i*i>=0 && N-(i+1)*(i+1)< 0 ){
                p=i ;
                break;
            };
        }
        
        int P = p*p ;
        
        if(p%2==1){
            y = p;
            x = 1;
            if(N-P ==1){
                y ++ ;
            }else if(N-P <= p && N-P>1){
                y ++ ;
                x += (N-P-1) ;
            }else if(N-P>p){
                y++;
                x+= p ;
                y-= N-P-p-1;
            }
            
        }else{
            x = p;
            y = 1;
            if(N-P ==1){
                x ++ ;
            }else if(N-P <= p && N-P>1){
                x ++ ;
                y += (N-P-1) ;
            }else if(N-P>p){
                x++;
                y+= p ;
                x-= N-P-p-1;
            }
            
        }
        printf("%lld %lld",x,y);
    }
