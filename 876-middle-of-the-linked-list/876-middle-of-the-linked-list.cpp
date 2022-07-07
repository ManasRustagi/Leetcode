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
    ListNode* middleNode(ListNode* head) {
        int length =0;
        ListNode* a=head;
        while(a!=NULL)
        {
            length+=1;
            a=a->next;
        }
        length=(length/2)+1;
        for(int i=1;i<length;i++)
        {
            head=head->next;
        }
        return head;
    }
};