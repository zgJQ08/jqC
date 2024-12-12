/*#include <stdio.h>
#include <stdlib.h>


struct ListNode
{
    int val;
    struct ListNode *next;
};
*/

struct ListNode* oddEvenList(struct ListNode* head)
{
    if (head == NULL || head->next == NULL) {
        return head; // 空或單節點直接返回
    }

    struct ListNode *odd = head;          // 奇數位置
    struct ListNode *even = head->next;   // 偶數位置
    struct ListNode *evenHead = even;     // 儲存偶數的起點

    while (even != NULL && even->next != NULL) {
        odd->next = even->next;           // 奇數鏈接下一個奇數
        odd = odd->next;
        even->next = odd->next;           // 偶數鏈接下一個偶數
        even = even->next;
    }

    odd->next = evenHead;                 // 奇數鏈接偶數鏈表
    return head;
}

/*
void Construct(struct ListNode* node, int length, int num)
{
    int a;
    scanf("%d", &a);
    node->val = a;

    if (num >= length) {
        node->next = NULL;
        return;
    }
    node->next = (struct ListNode* )malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}

int main()
{
    struct ListNode* head;
    int n, length;
    head = (struct ListNode* )malloc(sizeof(struct ListNode));
    scanf("%d", &n); // 輸入有幾組數列
    while (n--) {
        scanf("%d", &length); // 輸入數列長度
        Construct(head, length, 1);
        struct ListNode* ans = oddEvenList(head);
        struct ListNode* ptr;

        ptr = ans;

        // 輸出結果
        while (ptr != NULL) {
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
    return 0;
}
*/
