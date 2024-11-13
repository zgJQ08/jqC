/* %前面要：+空格 */
#include<stdio.h>
int main() {
	double a = 0;
	scanf("%lf", &a);
	double b = 0;
	if (a <= 560000)
		b = a * 0.05;
	else if (560000 < a && a <= 1260000)
		b = a * 0.12 - 39200;
	else if (1260000 < a && a <= 2520000)
		b = a * 0.2 - 140000;
	else if (2520000 < a && a <= 4720000)
		b = a * 0.3 - 392000;
	else if (4720000 < a)
		b = a * 0.4 - 864000;
	printf("全年應繳稅額為： %.0lf 元",b);
}
