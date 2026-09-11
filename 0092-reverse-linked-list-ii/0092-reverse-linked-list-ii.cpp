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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || left==right)
        {
            return head;
        }
        ListNode* cur=head;
        ListNode* prev=NULL;
        for(int i=1;i<left;i++)
        {
            prev=cur;
            cur=cur->next;
        }
        ListNode* tail=cur;
        ListNode* before=prev;
        for(int j=0;j<=right-left;j++)
        {
            ListNode* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        if(before)
        {
            before->next=prev;
        }
        else
        head=prev;

        tail->next=cur;

        return head;
    }
};