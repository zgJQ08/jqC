/* 1 用struct 放在main裡面 */
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

/* 2 用題目給的typedef struct 放在main外面 */
#include <stdio.h>

typedef struct point_t {
    double x;
    double y;
} point_t;  // 差別在這

int main() {
    point_t point; // 使用 typedef 定義的簡短名稱 point_t

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
