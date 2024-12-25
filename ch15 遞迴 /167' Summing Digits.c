//#include <stdio.h>
int f(int n) {
  	int new = 0 ;
    if(n<10) return n ;
    else{
        while(n>0){
            new += n%10 ;
            n /= 10;
        }
        f(new);
    }
}

/* 
int main(){
 
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));    
    return 0;
 
}
*/
