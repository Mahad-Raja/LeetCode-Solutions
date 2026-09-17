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
    ListNode* partition(ListNode* head, int x) {
        ListNode* cur=head;
        ListNode greater(0);
        ListNode lesser(0);
        ListNode* temp2=&greater;
        ListNode* temp1=&lesser;
        while(cur!=NULL)
        {
            if(cur->val<x)
            {
                temp1->next=cur;
                temp1=cur;
            }
            else
            {
                temp2->next=cur;
                temp2=cur;
            }
            cur=cur->next;

        }
        temp2->next=NULL;
        temp1->next=greater.next;
        return lesser.next;
    }
};