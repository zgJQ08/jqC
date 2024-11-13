/* 姬芭多東西要記 */
#include <stdio.h>
#include <locale.h> 

int main(){
  	setlocale(LC_ALL,""); //
	int N;
  	scanf("%d",&N);
  	char A[]="甲乙丙丁戊己庚辛壬癸";
	char B[]="子丑寅卯辰巳午未申酉戌亥";
	char *pa = A+ (N%10)*3 ; //用指標 //中文占三個字節
    char *pb = B + (N%12)*3 ;
    printf("%.3s%.3s",pa,pb); // 


}
