/* 反正用一個新的倒過來裝就好 */
#include <stdio.h>
int main(){
    int a , b , i=0 ,j=0 ,k=0 , l=0 , n=0 ,m=0;
    scanf("%d%d",&a,&b) ;
    int arr[100][100] = {0};
    int arrw[100][100] = {0};

    for(i=0 ; i<a ; i++){
        for(j=0 ; j<b ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int k=0 ; k<b ; k++){
        for(int l=0 ; l<a ; l++){
            arrw[k][l] = arr[l][k];
        }
    }

    for(n=0 ; n<b ; n++){
        for(int m=0 ; m<a ; m++){
            printf("%d ",arrw[n][m]);
        }
         printf("\n");
    }

}
