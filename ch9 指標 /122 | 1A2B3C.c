//#include <stdio.h>

void _A_B_C(int num1, int num2) {
    int N1[4] , N2[4] ;
    for(int i=0 ; i<4 ; i++){
        N1[i] = num1 % 10 ;
        N2[i] = num2 % 10 ;
        num1 /= 10;
        num2 /= 10;
    }
    int A = 0 , B = 0 , C = 0 ;
    for(int i= 0 ; i<4 ; i++){ //用i比j
        for(int j=0 ; j<4 ; j++){
            if(N1[i] == N2[j] ){
                if(i ==  j ) A++;
                else B++;
            }
        }
    }
    C = (4-(A+B))*2 ;
    printf("%dA%dB%dC",A,B,C);
}
 
/*int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    _A_B_C(num1, num2);
 
    return 0;
}
*/
