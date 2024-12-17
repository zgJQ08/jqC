// #include <stdio.h>

void isPalindrome(int x) {
    if(x<0){
        printf("false");
        return;
    }
    
    int Ax[100]; int n = 0 ;
    
    while(x>0){
        Ax[n] = x%10 ;
        x /=10 ; n++ ;
    }
    
    int T = 1 ;
    for(int i=0 ; i<n ; i++ ){
        if(Ax[i] != Ax[n-i-1]) T = 0 ;
    }
    
    if(T == 0) printf("false") ;
    else printf("true") ;
}

/*int main() {
    int x;
    scanf("%d", &x);
    isPalindrome(x);
    return 0;
}
*/
