/*這題還好，用新的矩陣來判斷*/
#include <stdio.h>

void Jolly_Jumpers(int Array[], int size) {
  int Num[size] , Ary[size-1];
  
  for(int i= 0 ; i< size-1 ; i++){
  	Ary[i] =(Array[i+1] - Array[i] > 0)? Array[i+1] - Array[i] : Array[i] - Array[i+1]  ;

  }
  
  
  for(int i= 0 ; i<size-1 ; i++){
  	Num[i] = i+1 ;
  }
  
  for(int i=0 ; i<size-1 ; i++){
  	if(Num[i] != -1){
    	for(int j=0 ; j<size ; j++){
        	if(Num[i] == Ary[j]){
            	Num[i] = -1 ;
            }
        }
    }
  }
  
  int N=0 ;
  for(int i= 0 ; i<size-1 ; i++){
  	if(Num[i] != -1){
    N = 1 ;
    break;
    }
  }
  
  if(N==0) printf("Jolly");
  else printf("Not jolly");
  
}

 
int main() {
    int size;
    scanf("%d", &size);
 
    int Array[100], i;
    for (i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }
 
    Jolly_Jumpers(Array, size);
    return 0;
}
