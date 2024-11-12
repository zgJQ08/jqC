/* 用forfor歷經所有可能，如果01相等再紀錄 */
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    
    int mL = 0; 
    
    for(int i = 0; i < n; i++){
        int c0 = 0;
        int c1 = 0;
        for(int j = i; j < n; j++){
            if(A[j] == 0){
                c0++;
            }
            else{
                c1++;
            }
            
            if(c0 == c1){
                int cL = j - i + 1;
                mL = (cL>mL)? cL : mL ;
            }
        }
    }
    printf("%d\n", mL);
}

