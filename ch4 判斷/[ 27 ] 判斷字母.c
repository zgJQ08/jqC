/* s不需要& */
#include <stdio.h>
	int main(){
    	char A[1] ;
      	scanf("%s",A);
      	if( (A[0] >='A' && A[0] <= 'Z')||(A[0] >= 'a' && A[0] <= 'z' )){
         	if(A[0] >= 'a' && A[0] <= 'z' ) A[0] = A[0] - 'a' + 'A' ;
      		if(A[0] == 'A' || A[0] == 'a')printf("the first.");
      		else if(A[0] == 'Z' || A[0] == 'z')printf("the last.");
      		else printf("%c%c",A[0]-1,A[0]+1);
          
        }else{
          
        printf("not English.");
          
        }
    }
