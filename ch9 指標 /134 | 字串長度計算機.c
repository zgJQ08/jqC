#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void len(char *arr)
{
int i = 1 ;
while(arr[i-1] != '\0' ){
    i++ ;
}
printf("%d",i-1);
}

int main()
{
    char arr[60];
    scanf("%s",arr);
    len(arr);
}
