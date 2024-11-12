/* 這題用double ，exp(log(p)/n) */
#include <stdio.h>
#include <math.h>

int main(){
    double n, p;
    scanf("%lf %lf", &n, &p);
    
    double t = exp(log(p)/n);
    printf("%0.lf\n", t);

    
    return 0;
}
