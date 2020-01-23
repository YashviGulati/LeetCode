/*
Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:

Given n will always be valid.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* curr=head;
        ListNode* prev=head;
        ListNode* newhead=head;
        while(curr!=NULL){
            len++;
            curr=curr->next;
        }
        if(len<n)
            return NULL;
        if(len==n){
            newhead=newhead->next;
            return newhead;
        }
        int t1=len-n;
        int t2=len-n+2;
        while(t1>1){
            prev=prev->next;
            t1--;
        }
        while(t2>1){
            head=head->next;
            t2--;
        }
        prev->next=head;
        
        return newhead;
        
    }
};
