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
    int length(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int s=length(head);
        k=k%s;
        ListNode* n;
        for(int i=0;i<k;i++)
        {
            ListNode* a=head;
            while(a->next->next!=NULL)
            {
                a=a->next;
            }
            n=a->next;
            a->next=NULL;
            n->next=head;
            head=n;
        }
        return head;
    }
};