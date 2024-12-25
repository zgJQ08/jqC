//#include <stdio.h>

void gcd(int a,int b) {
  	int ia = a , ib = b ;
    while(b !=0){
        int temp = a%b ;
        a = b ;
        b = temp;
    }
    printf("%d與%d的最大公因數為%d",ia,ib,a);
}
/*
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    gcd(a,b);
 
    return 0;
}
*/
