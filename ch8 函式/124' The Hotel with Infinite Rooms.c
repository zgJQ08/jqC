//#include <stdio.h>
int D_size(int S, int D) {
    int day = 1;   
    while (1) {    
        if (day <= D && D < day + S) {   //檢查天數是否在入住範圍內
            return S;  
        }
        
        day += S;  //幾天後換下一組
        S++; //之後人數多一 
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
