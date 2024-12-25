//#include <stdio.h>
//要空格
void bubble_sort(int data[]) {

    for(int i=0 ; i<5-1 ; i++){
        for(int j=0 ; j<5-i-1 ; j++){
            if(data[j] > data[j+1]){
            int temp = data[j] ;
            data[j] = data[j+1];
            data[j+1] = temp ;
            }
        }
    }
    
     for(int i=0; i<5; i++){
       if(i !=4) printf("%d ", data[i]);
       else printf("%d",data[i]);
	}
}

/*
 
int main() {
    int data[5];    
    for(int i=0; i<5; i++)
        scanf("%d", &data[i]);
 
    bubble_sort(data);
 
    return 0;
}
*/
