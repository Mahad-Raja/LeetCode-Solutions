/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
         if (head == NULL || head->next == NULL)
            return;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* cur=slow;
        while(cur!=NULL)
        {
            ListNode* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        ListNode* first=head;
        ListNode* sec=prev;
        while(sec->next!=NULL)
        {
            ListNode* firstnext=first->next;
            ListNode* secnext=sec->next;
            first->next=sec;
            sec->next=firstnext;
            first=firstnext;
            sec=secnext;
        }
        head=first;
    }
};