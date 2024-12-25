//#include <stdio.h>

int lcm(int a, int b) {
    for(int i=1 ; i<a*b ; i++){
        if(i % a == 0 && i % b ==0) return i;
    }
}
/*
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int result = lcm(m, n);
    printf("%d", result);
    return 0;
}
*/
