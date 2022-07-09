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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
    ListNode*evenstart=NULL;
    ListNode*evenend=NULL;
    ListNode*oddstart=NULL;
    ListNode*oddend=NULL;
    ListNode*c=head;
        int k=0;
    while(c!=NULL)
    {
        k++;
        if(k%2==0)
        {
            if(evenstart==NULL)
            {
                evenstart=c;
                evenend=evenstart;
            }
            else
            {
                evenend->next=c;
                evenend=evenend->next;
            }
        }
        else 
        {
            if(oddstart==NULL)
            {
                oddstart=c;
                oddend=oddstart;
            }
            else{
                oddend->next=c;
                oddend=oddend->next;
            }
        }
        c=c->next;
    }
    oddend->next=evenstart;
    evenend->next=NULL;
    head=oddstart;
    return head;
    }
};