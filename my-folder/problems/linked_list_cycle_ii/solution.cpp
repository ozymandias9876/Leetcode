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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        map<ListNode*,int>mp;

        if(head!=NULL)
        {
            while(slow->next!=NULL)
            {
                mp[slow]++;
                slow=slow->next;
                if(mp[slow]>1)
                    return slow;
            }
        }
        return NULL;
    }
        
        
};