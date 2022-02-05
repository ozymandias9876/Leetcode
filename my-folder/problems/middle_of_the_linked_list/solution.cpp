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
        ListNode *find=head;
        int ct=0;
        while(find!=NULL)
        {
            find=find->next;
            ct++;
        }
        ct/=2;
        while(ct--)
        {
            head=head->next;
        }
        return head;
    }
};