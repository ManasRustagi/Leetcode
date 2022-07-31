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
    int getlength(ListNode* head)
    {
        int count=1;
        while(head->next!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        int m=getlength(head);
        m=m-n;
        ListNode* a=head;
        if(m==0) head=head->next;
        else
        {
            for(int i=1;i<m;i++)
            {
              a=a->next;
            }
            a->next=a->next->next;
        }
        
        return head;
    }
};