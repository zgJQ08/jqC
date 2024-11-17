1. switch要有default 2.確保歷經的陣列還在範圍裡 

#include <string.h>

int value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int sum = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int temp = value(s[i]);
        int nTemp = (i + 1 < len) ? value(s[i + 1]) : 0; 
        
        if (temp >= nTemp) {
            sum += temp; 
        } else {
            sum += nTemp - temp; 
            i++; 
        }
    }

    return sum;
}
