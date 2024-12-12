#include <stdio.h>
#include <stdlib.h>

int grid[400][400];      // 地圖
int visited[400][400];   // 訪問標記
int N, M;                // 地圖大小
int lake_sizes[400 * 400 / 2 + 1]; // 存放每個湖泊的大小
int lake_count = 0;      // 湖泊數量

// 四個方向的移動
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// DFS 函數
int dfs(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M || visited[x][y] || grid[x][y] == 0)
        return 0;

    visited[x][y] = 1; // 標記當前點為已訪問
    int size = 1;      // 湖泊大小初始化為 1

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        size += dfs(nx, ny); // 累加連通的水域大小
    }

    return size;
}

// 比較函數，用於 qsort 排序
int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a; // 降序排序
}

int main() {
    // 讀取輸入
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &grid[i][j]);
            visited[i][j] = 0; // 初始化訪問標記為 0
        }
    }

    // 尋找所有湖泊
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                // 找到一個新的湖泊，計算其大小
                lake_sizes[lake_count++] = dfs(i, j);
            }
        }
    }

    // 對湖泊大小排序
    qsort(lake_sizes, lake_count, sizeof(int), compare);

    // 輸出結果
    for (int i = 0; i < lake_count; i++) {
        printf("%d\n", lake_sizes[i]);
    }

    return 0;
}
