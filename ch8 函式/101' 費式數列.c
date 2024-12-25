#include <stdio.h>

void getFib(int N) {
    int a = 0 , b = 1 ;
    N -= 2 ;
    printf("%d %d",a,b);
    while(N--){
        int c = a+b ;
        printf(" %d",c);
        a = b ; 
        b = c ;
        
    }
}

int main() {
    int N;
    scanf("%d", &N);
    getFib(N);
 
    return 0;
}
