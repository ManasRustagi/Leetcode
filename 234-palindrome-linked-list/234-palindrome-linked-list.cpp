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
    ListNode*Reverse(ListNode*head)
    {
        ListNode*p=NULL;
        ListNode*c=head;
        while(c!=NULL)
        {
            ListNode* n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        head=p;
        return head;
    }
    ListNode*Middle(ListNode*head)
    {
       ListNode *slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* a=Middle(head);
        a=Reverse(a);
        while(a!=NULL)
        {
            if(a->val!=head->val) return false;
            a=a->next;
            head=head->next;
        }
        return true;
    }
};