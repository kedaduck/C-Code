#include <stdio.h>

// 将一个链表逆置

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution {
    public:
    // 将链表完全逆置
    ListNode *reverser(ListNode * head){
        ListNode *new_head = NULL;
        while (head){
            ListNode *next = head->next;
            head->next = new_head;
            new_head = head;
            head = next;
        }
        return new_head;
    }
    // 将链表从位置m到位置n逆序  eg: 1->2->3->4->5   1->4->3->2->5
    ListNode *reverseBetween(ListNode *head, int m, int n){
        int change_len = n - m + 1;
        ListNode *pre_head = NULL;
        ListNode *result = head;
        while (head && --m){
            pre_head = head;
            head = head->next;
        }
        ListNode *modify_list_tail = head;
        ListNode *new_head = NULL;
        while (head && change_len){
            ListNode *next = head->next;
            head->next = new_head;
            new_head = head;
            head = next;
            change_len--;
        }
        modify_list_tail->next = head;
        if(pre_head){
            pre_head->next = new_head;
        }else{
            result = new_head;
        }
        return result;
    }
};

int main(){
    
    ListNode a;
    ListNode b;
    ListNode c;
    ListNode d;
    ListNode e;
    a.val = 10;
    b.val = 20;
    c.val = 30;
    d.val = 40;
    e.val = 50;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    ListNode *head = &a;
    while (head){
        printf("%d\n", head->val);
        head = head->next;
    }
    Solution solve;
    head = solve.reverseBetween(&a, 2, 4);
    printf("After reverse \n");
     while (head){
        printf("%d\n", head->val);
        head = head->next;
    }
    return 0;
}