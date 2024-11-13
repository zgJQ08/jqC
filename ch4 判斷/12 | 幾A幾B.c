#include <stdio.h>
    int main(){
        int a,b ;
        scanf("%d%d",&a,&b);
        int A[4] , B[4] ;
        for(int i=0 ; i<4 ; i++){
            A[i] = a%10 ; B[i] = b%10 ;
            a /= 10 ; b/=10 ;
        }
        int nA =0 , nB=0 ;
        
        for(int i=0 ; i<4 ; i++){
            for(int j=0 ; j<4 ; j++){
            if(A[i] == B[j] ){
                if(i==j) nA ++;
                else nB++;
            }
        }
        }
        printf("%dA%dB",nA,nB);
        
    }
