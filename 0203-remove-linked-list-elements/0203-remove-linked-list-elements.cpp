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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
        return NULL;
        ListNode* move=head->next;
        ListNode* prev=head;
        while (head != NULL && head->val == val)
        {
          head = head->next;
        }
        while(move!=NULL)
        {
            if(move->val==val)
            {
            prev->next=move->next;
            move=move->next;
            }
            else
            {
                prev=move;
                move=move->next;
            }
        }
        return head;
    }
};