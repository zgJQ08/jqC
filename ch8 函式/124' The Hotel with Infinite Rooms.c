//#include <stdio.h>

int D_size(int S, int D) {
    int day = 1; //第一天
    while(1){
        if( day <= D && D < day+S) return S; //測試有無在範圍裡面
        day += S; //下一輪
        S++; //每輪多一
    }
}

 
/*
int main(){
    int S, D;
    scanf("%d %d", &S, &D);
    printf("%d", D_size(S, D));
    return 0;
}
*/
