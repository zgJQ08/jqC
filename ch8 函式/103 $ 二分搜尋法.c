//#include <stdio.h>

int binarysearch(int arr[], int size, int target) {
    int left = 0;               // 左邊界
    int right = size - 1;       // 右邊界

    while (left <= right) {     // 還在範圍裡面
        int mid = left + (right - left) / 2;  // 中間索引

        if (arr[mid] == target) {  // 找到目標
            return mid;
        }
        if (arr[mid] < target) {   // 目標在右邊
            left = mid + 1;
        } else {                   // 目標在左邊
            right = mid - 1;
        }
    }
    return -1;  // 找不到
}
/*
int main() {
    int search, ans;
    int data[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};
    int size = sizeof(data) / sizeof(int);  

    scanf("%d", &search);

    ans = binarysearch(data, size, search);  
    if (ans < 0) {
        printf("找不到 %d\n", search);
    } else {
        printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
    }

    return 0;
}
*/
