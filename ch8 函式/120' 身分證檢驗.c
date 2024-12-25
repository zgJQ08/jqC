#include <stdio.h>

void ID_Check(char ID[]) {
    char Ia[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int IaN[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    int sum = 0;
    for(int i=0 ; i<26 ; i++){
        if( ID[0] == Ia[i]){
            sum += IaN[i] / 10 + (IaN[i] %10) *9 ;
        }
    }
    int j = 8 ;
    for(int i=1 ; i<9 ; i++){
        sum += ( ID[i] - '0' )*j;
        j--;
    }
    sum += ID[9] - '0' ;
    
    if(sum%10==0) printf("real\n");
    else printf("fake\n");
}
 
int main() {
    char ID[100];
    while (scanf("%s", ID) != EOF) {
        ID_Check(ID);
    }
    return 0;
}
