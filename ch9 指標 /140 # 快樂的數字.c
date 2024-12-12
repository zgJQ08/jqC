#include <stdio.h>
#include <stdbool.h>
bool isHappy(int n) {
    
    int arr[100];
    int times = 0 ;
    
    while(1){
        
    int New = 0 ;
    
    while(n>0){
        New += (n%10) * (n%10) ;
        n /= 10;
    }
    
    if(New == 1) return true ; // 值=1 -> true
    
    
    int T=1 ; // T=0 -> 被找到有一樣的
    arr[times] = New ;

    
    for(int i=0 ; i<times ; i++) {
        if( New == arr[i]) T = 0 ;
    }
    
    
    if(T==0) return false ;
    
    n = New ;
    times ++ ;
    }
    
}
 

 
int main() {
    int n;
    scanf("%d", &n);
    if (isHappy(n)) {
        printf("true");
    }
    else {
        printf("false");
    }
    return 0;
}
