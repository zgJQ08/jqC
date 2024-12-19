/*#include <stdio.h>
#include <stdlib.h>
*/

void findMaximalSquare(int** matrix, int rows, int cols, int *maxEdge) {
    *maxEdge = 0; //初始化
    
    //沒處理 1 1 1 會錯
    if(rows == 0 && cols == 0 && matrix[0][0] == 1){
        *maxEdge = 1 ;
        return ;
    }
   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) { 
                int cEdge = 1; //當前邊長
                int v = 1;       //有效正方形

                // 用n行列去檢查
                while (i + cEdge <= rows && j + cEdge <= cols && v) {
                    for (int k = 0; k <= cEdge; k++) {
                        if (matrix[i + cEdge][j + k] == 0 || matrix[i + k][j + cEdge] == 0) {
                            v = 0; // 發現不是 1，結束檢查
                            break;
                        }
                    }
                    if (v==1) cEdge++; //擴展邊長
                }

                *maxEdge = (*maxEdge > cEdge)? *maxEdge : cEdge ;
            }
        }
    }
}

/*
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int** matrix = (int**)malloc(row * sizeof(int*));
    int i, j, tmp;
    for (i = 0; i < row; i++) {
        matrix[i] = (int*)malloc(col * sizeof(int));
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &tmp);
            matrix[i][j] = tmp;
        }
    }
 
    int maxEdge = 0;
    findMaximalSquare(matrix, row - 1, col - 1, &maxEdge);
 
    printf("%d", maxEdge * maxEdge);
    for (i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);
 
}
*/
