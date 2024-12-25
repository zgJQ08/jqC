/*
#include <stdio.h>
#include <stdlib.h>
*/

// head -> val 存的是值 // head -> next 是下個數字 
int getDecimalValue(struct ListNode* head)
{
   int result = 0;
    while (head != NULL) { //如果還有
        result = result * 2 + head->val; //當前結果進位+現在的1/0
        head = head->next; //指向下一個數字
    }
    return result;
}



/* 
// 輸入二進位，並一位一位輸入，採用遞迴方式輸入，資料存放採用linked list
// 例如數字6的二進位是 1 1 0
// 表示有三個結構，第一個結構的val存1，第一個結構的next紀錄第二個結構，第二個結構的val存1，第二個結構的next紀錄第三個結構，第三個結構的val存0，第三個結構的next紀錄NULL
void Construct(struct ListNode* node, int length, int num)
{
    int a;
    scanf("%d", &a);
    node->val = a;
 
    if(num >= length)
    {
        node->next = NULL;
        return;
    }
    node -> next = (struct ListNode* )malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}
 
int main()
{
    struct ListNode *head;
    int n, a, length;
    head = (struct ListNode* )malloc(sizeof(struct ListNode));
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &length);
        Construct(head, length, 1);
        int ans = getDecimalValue(head);
        printf("%d\n", ans);
    }
}
*/
