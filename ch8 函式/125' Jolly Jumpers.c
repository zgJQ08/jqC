//存處理過的值->排序->照順序比較
//#include <stdio.h>

void Jolly_Jumpers(int Array[], int size) {
    int Ab[size-1]; //可以宣告size-1
    for(int i=0 ; i<size-1 ; i++){
        Ab[i] = (Array[i+1] - Array[i]>0)? Array[i+1] - Array[i] : Array[i] - Array[i+1] ;
    }
    
    for(int i=0 ; i<size-2 ; i++){ //記得這邊size-1-1
        for(int j=0 ; j<size-2-i ; j++){
            if(Ab[j] > Ab[j+1]){
                int temp = Ab[j];
                Ab[j] = Ab[j+1];
                Ab[j+1] = temp;
            }
        }
    }
    
    int T = 1 ;
    for(int i=0 ; i<size-1 ; i++){ 
        if(Ab[i] != i+1) T=0; //是跟i+1比對
    }
    
    if(T==0) printf("Not jolly");
    else printf("Jolly");
}
/**
int main() {
    int size;
    scanf("%d", &size);
 
    int Array[100], i;
    for (i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }
 
    Jolly_Jumpers(Array, size);
    return 0;
}
**/
