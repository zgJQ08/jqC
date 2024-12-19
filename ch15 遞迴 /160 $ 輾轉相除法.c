#include <stdio.h>
#include <stdlib.h>
 
int GCD(int t, int v) {
    if (v==0) return t;
    return GCD(v,t%v);
}
 
int main() {
    int a, b;
 
    scanf("%d", &a);
    scanf("%d", &b);
    int temp;
 
    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d\n", GCD(a, b));
    return 0;
}
