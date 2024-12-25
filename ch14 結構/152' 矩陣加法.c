/* data給[100] [100] 很好寫、還會過喔 */
#include <stdio.h>
#include <stdlib.h>

typedef struct matrix {
    int row, col;
    int* data;
} *MATRIX;

int main(){
    MATRIX M1 = (MATRIX)malloc(sizeof(struct matrix));
    MATRIX M2 = (MATRIX)malloc(sizeof(struct matrix));
    
    
    scanf("%d %d", &M1->row, &M1->col);
    M1->data = (int*)malloc(M1->row * M1->col * sizeof(int));
    for (int i = 0; i < M1->row * M1->col; i++) {
        scanf("%d", &M1->data[i]);
    }
    
    
    scanf("%d %d", &M2->row, &M2->col);
    M2->data = (int*)malloc(M2->row * M2->col * sizeof(int));
    for (int i = 0; i < M2->row * M2->col; i++) {
        scanf("%d", &M2->data[i]);
    }
    
    
    if ((M1->row != M2->row) || (M1->col != M2->col)) {
        printf("不可相加\n");
    }else{
        MATRIX M3 = (MATRIX)malloc(sizeof(struct matrix));
        M3->row = M1 ->row ;
        M3->col = M1 ->col ;
        M3 -> data = (int*)malloc(M3->row * M3 ->col * sizeof(int));
        
        for (int i = 0; i < M3->row * M3->col; i++) {
            M3 -> data[i] = M1 -> data[i] + M2 -> data[i] ;
        }
    
        for(int i=0 ; i< M3 ->row ; i++){
            for(int j=0 ; j < M3 -> col ; j++){
                if(j != M3->col-1) printf("%d ",M3->data[i*M3->col + j]);
                else printf("%d",M3->data[i*M3->col + j]);
            }
            printf("\n");
        }
        free(M3->data); //
        free(M3); //
    }
    free(M1->data); //
    free(M2->data); //
    free(M1); //
    free(M2); //
        
        
        
    }
