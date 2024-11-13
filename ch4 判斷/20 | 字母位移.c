/* 很容易忘ㄉ 讀取字串要用%s ，分開輸出用%c 然後字串的數字要處理過 */
#include <stdio.h>
int main() {
    char N[3];
    scanf("%s", N);
    
    int sf = N[1] - '0'; 

    if (N[0] == '+') {
        N[2] = (N[2] - 'A' + sf) % 26 + 'A';
    } else {
        N[2] = ((N[2] - 'A' - sf + 26) % 26) + 'A';
    }
    
    printf("%c", N[2]);
    
    return 0;
}

