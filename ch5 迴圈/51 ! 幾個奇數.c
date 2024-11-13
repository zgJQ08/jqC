#include<stdio.h>
int main() {
	int a;
	int i = 0;
	int sum = 0;
	while(1){
		scanf("%d", &a);
		if (a == 0) {
			break;
		}else if(a%2==1){
		    sum ++;
		}
	}
	printf("%d", sum);
}
