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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
    return head;
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        k%=count;
        if(k == 0)
    return head;
        temp->next=head;
        ListNode* newTail = head;
        int i=0;
        int steps=count - k - 1;
        while(i<steps)
        {
            newTail=newTail->next;
            i++;
        }
        ListNode* newHead= newTail->next;
        newTail->next=NULL;
        return newHead;

    }
};