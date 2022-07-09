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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            ListNode*start=head;
            ListNode*next=temp->next;
            ListNode*p=head;
            while(start!=next)
            {
                if(start->val>temp->val)
                {
                    temp->next=start;
                    if(start==head)
                    {
                        head=temp;
                    }
                    else
                        p->next=temp;
                    while(start->next!=temp)
                   {
                    start=start->next;
                   }
                    start->next=next;
                }
                p=start;
                start=start->next;
                
            }
            temp=next;
        }
        return head;
    }
};