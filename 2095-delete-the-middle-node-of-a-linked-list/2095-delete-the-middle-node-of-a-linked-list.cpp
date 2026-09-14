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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL) 
            return head;
        ListNode *fast;
        ListNode *slow;
        fast = slow = head;
        int c = 0;
        while(fast!= NULL){
            c++;
            fast = fast->next;
        }
        if (c == 1) 
            return nullptr;
        fast = head;
        for(int i=0;i<c/2;++i) 
            fast = fast->next;
        for(int j=0;j<(c/2)-1;++j) 
            slow = slow->next;
        slow->next = fast->next;
        return head;
    }
};