/* 這題超麻煩，反正記得要用到limits中的INI_MAX，還有do...while(1) ，找到回文在break */
#include <stdio.h>
#include <limits.h> // 需要用到 INT_MAX

int main(){
    int times;
    scanf("%d", &times);
    while(times--){
        int Num, l = 0 ,F=0 , t=0;
        scanf("%d", &Num);
        int Mun;
        
        do{
            t++;   
            Mun = 0; // 記得重置
            int temp = Num;
            l = 0;
            int M[100];
            
            while(temp > 0){
                Mun = Mun * 10 + (temp % 10);
                M[l] = temp % 10;
                temp /= 10;
                l++;
            }
            
            if(Num > INT_MAX - Mun){
                F = 1;
                break;
            } else {
                Num += Mun;
            }
            
            temp = Num;
            l = 0;
            while(temp > 0){
                M[l] = temp % 10;
                temp /= 10;
                l++;
            }
            
            int isPalindrome = 1;
            for(int i = 0; i < l / 2; i++){
                if(M[i] != M[l - 1 - i]){
                    isPalindrome = 0;
                    break;
                }
            }
            
            if(isPalindrome){
                break;
            }
        } while(1);

        if(F == 0) printf("%d %d\n", t, Num);
        else printf("overflow!\n");
    }
}
