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
    bool hasCycle(ListNode *head) {
        //turtle and hare technique. slow and fast pointers used
        //if any cycle exists the slow and fast pointers will point to same location sometime
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!= NULL && fast->next!= NULL)
        {
            slow = slow ->next;
            fast = fast->next->next;
            if(slow == fast)    return true;
        }
        return false;
    }
};