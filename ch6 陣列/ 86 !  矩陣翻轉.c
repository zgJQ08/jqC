/* 反正用一個新的倒過來裝就好 */
#include <stdio.h>
int main(){
    int a , b ;
    scanf("%d%d",&a,&b) ;
    int arr[a][b] ;
    int arrw[b][a] ;

    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0 ; i<b ; i++){
        for(int j=0 ; j<a ; j++){
            arrw[i][j] = arr[j][i];
        }
    }

    for(int i=0 ; i<b ; i++){
        for(int j=0 ; j<a ; j++){
            printf("%d ",arrw[i][j]);
        }
         printf("\n");
    }

}
