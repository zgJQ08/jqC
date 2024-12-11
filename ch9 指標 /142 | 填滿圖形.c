/*#include <stdio.h>
#include <stdlib.h>*/
 
void floodFill(int** image, int imageSize, int sr, int sc, int newColor) {
    int oC = image[sr][sc];
    if (oC == newColor) return; // 起始


    void fill(int x, int y) {
        if (x < 0 || x >= imageSize || y < 0 || y >= imageSize || image[x][y] != oC) return; //超出

        image[x][y] = newColor; 

        //擴散
        fill(x - 1, y);
        fill(x + 1, y); 
        fill(x, y - 1); 
        fill(x, y + 1); 
    }

    fill(sr, sc); 
}
 
/* int main() {
    int n;
    int sr, sc, newColor;
    scanf("%d", & n);
    int** p = NULL;
    p = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        p[i] = (int*)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int tmp;
            scanf("%d", &tmp);
            p[i][j] = tmp;
        }
    }
    scanf("%d", &sr);
    scanf("%d", &sc);
    scanf("%d", &newColor);
    floodFill(p, n, sr, sc, newColor);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}
*/
