/* 把數字去用2~9試著分解，然後反過來輸出 */
#include <stdio.h>

int main()
{
    int test;
    long long num;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%lld", &num);
      
        int arr[10000];
        int n = 0;
        
        if(num == 1)
        {
            printf("1");
        }
        else
        {
            // 嘗試從 9 到 2 進行因數分解
            for(int i = 9 ; i > 1 ; i--)
            {
                while(num % i == 0 && num >= i)
                {
                    num /= i;
                    arr[n] = i;
                    n++;
                }
            }
            
            if(num == 1)
            {
                for(int i = n-1 ; i >= 0 ; i--)
                {
                    printf("%d", arr[i]);
                }
            }
            else printf("-1");
        }
        printf("\n");
    }
}
