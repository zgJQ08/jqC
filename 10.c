#include <stdio.h>
#include <locale.h> //

int main() {
    
    setlocale(LC_ALL, ""); //讓中文能正常顯示

    int N;
    scanf("%d", &N);
    
    char A[] = "甲乙丙丁戊己庚辛壬癸";
    char B[] = "子丑寅卯辰巳午未申酉戌亥";
    
    char *pA = A + (N % 10) * 3; //用指標
    char *pB = B + (N % 12) * 3;

    printf("%.3s%.3s\n", pA, pB); //中文占3字節

}
