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
    int length(ListNode*head)
    {
        int l=0;
        while(head!=NULL)
        {
            l++;
            head=head->next;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=length(headA);
        int l2=length(headB);
        ListNode*a=headA;
        ListNode*b=headB;
        int d=0;
        if(l1>l2)
        {
            d=l1-l2;
                while(d--)
                {
                    a=a->next;
                }
        }
        else{
            d=l2-l1;
            while(d--)
            {
                b=b->next;
            }
        }
        
        while(a!=NULL && b!=NULL)
        {
            if(a==b) return a;
            a=a->next;
            b=b->next;
            
        }
        return NULL;
    }
};