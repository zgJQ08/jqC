//#include <stdio.h>

char ascii(char sign, int num, char msg) {
    
    if(sign == '-')return ((msg - 'A')-num+26)%26 + 'A' ;
    else return ((msg-'A')+num)%26 + 'A';
}

/*
int main() {
    char sign,msg;
    int num;
    scanf("%c%d%c", &sign, &num, &msg);
    printf("%c", ascii(sign, num, msg));
 
    return 0;
}
*/
