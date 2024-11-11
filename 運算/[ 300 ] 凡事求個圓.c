/* 圓周率要背，除非有其他解法^^ */
#define PI 3.141592653589793
#include <stdio.h>
	int main(){
    	float R;
      	scanf("%f",&R);
      	printf("pi=%.5f\n",PI);
      	printf("radius=%.0f\n",R);
      	printf("circumference=%.5f\n",R*2*PI);
        printf("area=%.5f\n",R*R*PI);
    
    }
