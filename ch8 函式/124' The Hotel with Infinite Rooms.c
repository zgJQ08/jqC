/* 檢查D是否在入住範圍內（在day~day+lcu-1期間） */
#include "D_size.h"
int D_size(int S, int D) {
    int day = 1;  int lCu = S;  
    while (1) {    
        if (day <= D && D < day + lCu) {  
            return lCu;  
        }
        
        day += lCu;  
        lCu++;        
    }
}
