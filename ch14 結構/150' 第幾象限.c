#include <stdio.h>

struct point_t {
    double x;
    double y;
};

int main() {
    struct point_t point;  //定義一個函式point裡面包含了x,y
    scanf("%lf %lf", &point.x, &point.y);

    if (point.x > 0 && point.y > 0) {
        printf("第一象限\n");
    } else if (point.x < 0 && point.y > 0) {
        printf("第二象限\n");
    } else if (point.x < 0 && point.y < 0) {
        printf("第三象限\n");
    } else{
        printf("第四象限\n");
    } 
}
