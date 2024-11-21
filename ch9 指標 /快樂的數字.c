#include <stdio.h>
#include <stdbool.h>

int next_n(int n) {
    int newN = 0;
    while (n > 0) {
        newN += (n % 10) * (n % 10);
        n /= 10;
    }
    return newN;
}

bool contains(int* history, int size, int n) {
    for (int i = 0; i < size; i++) {
        if (history[i] == n) {
            return true; 
        }
    }
    return false;  
}

bool isHappy(int n) {
    int history[1000];  
    int size = 0;       

    while (n != 1) {  
        if (contains(history, size, n)) {
            return false;  // 不快樂
        }
        history[size++] = n;  
        n = next_n(n);        
    }

    return true;  // 快樂數字
}

int main() {
    int n;
    scanf("%d", &n);
    if (isHappy(n)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}
