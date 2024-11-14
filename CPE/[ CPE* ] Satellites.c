#include <math.h>
#include <string.h>
#include <stdio.h>

#define PI 3.14159265358979323846

int main(){
    double s, a;
    char c[5];
    while(scanf("%lf %lf %s", &s, &a, c) != EOF){
        if(strcmp(c, "min") == 0) a /= 60;
        if(a > 180) a = 360 - a;
        double ang = a * PI / 180.0;
        double chord = 2.0 * (s + 6440.0) * sin(ang / 2.0);
        double arc = ang * (s + 6440);
        printf("%.6lf %.6lf\n", arc, chord);
    }
}

