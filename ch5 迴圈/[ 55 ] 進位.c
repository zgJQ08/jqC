/* 可以直接%a%b來算有沒有進位 然後進位的1要記得 */
#include <stdio.h>

int main() {
    while (1) {
        int A, B;
        scanf("%d%d", &A, &B);

        if (A == 0 && B == 0) return 0;

        int ca = 0;  
        int carry = 0;  

        for (int i = 0; i < 10; i++) {
            int digitA = A % 10;  
            int digitB = B % 10;  
            
            A /= 10;  
            B /= 10;  

            if (digitA + digitB + carry >= 10) {
                ca++;  
                carry = 1;  
            } else {
                carry = 0;  
            }

        }

        if (ca == 0) {
            printf("No carry operation.\n");
        } else if (ca == 1) {
            printf("1 carry operation.\n");
        } else {
            printf("%d carry operations.\n", ca);
        }
    }

    return 0;
}
