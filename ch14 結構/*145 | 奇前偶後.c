#include <stdio.h>
#include <stdlib.h>
/*
struct ListNode
{
    int val;
    struct ListNode *next;
};
*/
struct ListNode* oddEvenList(struct ListNode* head)
{
  	//head=[1] [2] [3] [4] [5] NULL 
    if(head == NULL || head->next == NULL) return head ; //奇葩情況
  	struct ListNode *odd = head ; //odd指針 指向[1]
  	struct ListNode *even = head->next ; //even指針 指向[2]
  	struct ListNode *evenHead = even; //保存even指針 [2]的位置
  	while(even !=NULL && even->next !=NULL){ //確保even 跟 下一個odd是有東西的
    //odd連結odd 然後下一個
    odd -> next = even -> next ; 
    odd = odd -> next ; 
    //even連結even 然後下一個
    even -> next = odd -> next ;
    even = even -> next;   
    }
  odd->next = evenHead ; //odd串接even
  return head ;
}
/*
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
    node->next = (struct ListNode* )malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}
 
int main()
{
    struct ListNode* head;
    int n, a, length;
    head = (struct ListNode* )malloc(sizeof(struct ListNode));
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &length);
        Construct(head, length, 1);
        struct ListNode* ans = oddEvenList(head);
        struct ListNode* ptr;
 
        ptr = ans;
 
        while(ptr != NULL)
        {
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
*/
