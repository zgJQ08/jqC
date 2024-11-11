/* #順序要對 ，然後PI是M_PI */
#define _GNU_SOURCE
#include <math.h> 
#include <stdio.h>

int main(){
    float R;
    scanf("%f", &R);
    printf("pi=%.5f\n", M_PI); 
    printf("radius=%.0f\n", R);
    printf("circumference=%.5f\n", R * 2 * M_PI);
    printf("area=%.5f\n", R * R * M_PI);

    return 0;
}
